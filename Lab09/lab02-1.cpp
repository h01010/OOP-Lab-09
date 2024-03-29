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

	friend std::ofstream& operator<<(std::ofstream& o, AnyString& a);
};

//operator<< 을 구현하세요
std::ofstream& operator<<(std::ofstream& o, AnyString& a); {
	o << a.getAnyString();
	return a;
}
int main() {

	std::ofstream out("testOveroding.txt");

	AnyString a("Hello, this is operator overloading test!!!");
	out << a << std::endl;

	return 0;
}
