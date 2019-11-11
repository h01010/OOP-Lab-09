//(실습3)벡터의 데이터 중 22라는 값을 삭제하기 위한 코드이다.
//실행해 보고 오류가 나오는 부분을 찾아 수정해 보세요.

#include <iostream>
#include <vector>

int main() {
	std::vector<int> vec;
	vec.push_back(11);
	vec.push_back(22);
	vec.push_back(33);
	vec.push_back(44);

	// Remove an element from vector if its value is equal to 22
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		if (*itr == 22) {	//삭제하는 순간 iterator가 삭제됨, 그러므로 다음 가르켜야할 원소도 삭제됨
			itr = vec.erase(itr);	//erase하면서 itr의 값을 반환
		}
	}

	// Print Entire vector contents after the removal of element
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
		std::cout << "Vector element: " << *itr << std::endl;
	}

	getchar();
}
