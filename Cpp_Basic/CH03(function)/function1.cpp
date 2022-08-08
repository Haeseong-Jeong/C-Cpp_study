#include <iostream>
using namespace std;

//디폴트 매개변수는 함수 선언부에서 넣어 줘야 한다. 오른쪽부터 넣어야...
int funcA(int a = 1, int b = 3);

int main()
{
	cout << funcA() << endl;
	cout << funcA(5) << endl;
	cout << funcA(2, 4) << endl;
}

int funcA(int a, int b)
{
	return a + b;
}