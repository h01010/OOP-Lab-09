//(실습1) 아래 코드의 컴파일 에러 원인을 생각해 보세요.
//(실습 1.1) 코드를 수정하여 정상적으로 컴파일 하시요 (힌트. virtual 키워드 활용)
class Animal {
public:
	//...
protected:
	int age;
};
//이론 자료에 있다.
class Cat : public virtual Animal {/*.....*/ };
class Dog : public virtual Animal {/*....*/ };		//virtual을 함으로써 하나의 인스턴스만 바라보게 됨

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
	//아래가 문제, Dog의 animal인지 Cat의 animal인지 모른다
	animal = dat;
	animal = static_cast <Cat *>(dat);
	animal = (Cat *)dat;
}

