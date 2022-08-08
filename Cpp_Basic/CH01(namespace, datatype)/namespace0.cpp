#include <iostream>
#include "header1.h"
#include "header2.h"
using namespace std;//std 네임스페이스 지정

int main()
{

	/*cout << "Hello, World!" << endl;

	int num = 20;
	std::cout << "Hello World!!!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;*/

	int number = 0;
	cout << "모니터 입력 : ";
	cin >> number;
	cout << "모니터 출력 : " << number << endl;//endl 줄바꿈

	return 0;
}