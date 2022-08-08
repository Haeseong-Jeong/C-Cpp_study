#include <iostream>
using namespace std;

int getsize();

int main()
{
	const int size = 100;
	const int buffersize = getsize();
	//size = 200; 수정 불가
	//const int count; const는 선언 동시에 초기화를 해야함

	cout << size << endl;
	cout << buffersize << endl;
	return 0;
}

int getsize()
{
	return 200;
}