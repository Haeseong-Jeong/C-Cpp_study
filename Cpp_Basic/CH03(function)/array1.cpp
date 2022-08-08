#include <iostream>
using namespace std;

int main()
{
	int num;
	printf(" 배열 크기 정수 입력 : ");
	cin >> num;

	int *data = new int[num];//heap에 생김, 주소로 받아야함

	for (int i = 0; i < num; i++)
	{
		cout << " 배열 요소 입력 : ";
		cin >> data[i];
	}

	cout << "배열 = ";
	for (int i = 0; i < num; i++)
	{
		cout <<  data[i] << ",";
	}

	delete[] data;

	return 0;
}