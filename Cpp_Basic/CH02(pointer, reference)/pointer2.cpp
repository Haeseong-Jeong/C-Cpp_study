#include <iostream>
using namespace std;

int main()
{
	int value = 100;
	int* pointervalue = &value;

	cout << value << endl;
	cout << &value << endl;
	cout << pointervalue << endl;
	cout << *pointervalue << endl;
	cout << &pointervalue << endl;

	int** ppointervalue = &pointervalue;
	cout << ppointervalue << endl;//value의 주소값의 주소값
	cout << *ppointervalue << endl;//value의 주소값
	cout << **ppointervalue << endl;//value의 값
	return 0;
}