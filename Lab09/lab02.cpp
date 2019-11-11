//(�ǽ�2)�Ʒ� �ڵ带 �м� / ���� ��, ������ ������ Ȯ���� ���ÿ�.

/*
(�ǽ� 2.1) ���� �ڵ�� AnyString ������Ʈ�� �Լ��� getAnyString()�� �����Ͽ�,
string ���� output ������ ���� �Ŀ� ���Ͽ� ����Ͽ���.
������ ������ �����ε��� Ȱ���Ͽ� operator<< �� ������ ���, out << a << std::endl; �� ���� ������ ����� �����ϴ�.
�Ʒ� �ڵ��� operator<<�� �ϼ��ϼ���.
*/
#include <fstream>
#include <iostream>
#include <string>

class AnyString {
	std::string anyString;

public:
	AnyString(const std::string& anyString) : anyString(anyString) {}
	std::string getAnyString() {
		return "Stored String :: " + anyString;
	}
	
};


int main() {

	std::ofstream out("testOveroding.txt");

	AnyString a("Hello, this is operator overloading test!!!");
	std::string output = a.getAnyString();
	out << output << std::endl;

	return 0;
}
