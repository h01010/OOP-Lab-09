//(�ǽ�1) �Ʒ� �ڵ��� ������ ���� ������ ������ ������.
//(�ǽ� 1.1) �ڵ带 �����Ͽ� ���������� ������ �Ͻÿ� (��Ʈ. virtual Ű���� Ȱ��)
class Animal {
public:
	//...
protected:
	int age;
};
//�̷� �ڷῡ �ִ�.
class Cat : public virtual Animal {/*.....*/ };
class Dog : public virtual Animal {/*....*/ };		//virtual�� �����ν� �ϳ��� �ν��Ͻ��� �ٶ󺸰� ��

class DogCat : public  Cat, public  Dog {
public:
	void setAge() {
		age = 10;
		Cat::age = 10;
	}
};
int main() {
	DogCat *dat = new DogCat();
	Animal *animal;
	//�Ʒ��� ����, Dog�� animal���� Cat�� animal���� �𸥴�
	animal = dat;
	animal = static_cast <Cat *>(dat);
	animal = (Cat *)dat;
}

