//(실습2)아래 코드를 분석 / 실행 후, 생성된 파일을 확인해 보시오.

/*
(실습 2.1) 위의 코드는 AnyString 오브젝트의 함수인 getAnyString()을 실행하여,
string 값을 output 변수에 리턴 후에 파일에 출력하였다.
하지만 연산자 오버로딩을 활용하여 operator<< 을 정의할 경우, out << a << std::endl; 와 같은 형태의 출력이 가능하다.
아래 코드의 operator<<를 완성하세요.
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
