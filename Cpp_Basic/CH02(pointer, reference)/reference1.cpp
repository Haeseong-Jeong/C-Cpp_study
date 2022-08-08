#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	int& ref = num;//ref는 num의 별명

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;//num값 출력됨

	ref = 100;//num값이 바뀜

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;//num값이 출력됨

	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl;//num값의 주소가 출력됨

	cout << "num+ref = " << num+ref << endl;
	return 0;
}