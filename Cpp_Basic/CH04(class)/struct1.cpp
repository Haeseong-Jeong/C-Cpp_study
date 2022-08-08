#include <iostream>
using namespace std;

struct Strucr1
{
	int i;
	int j;
};

const Strucr1 s0 = { 0 };//모든 변수 0으로 초기화 
//const Strucr1 s0 = { 8 }; 초기화 위반, 0 아니면 안됌
const Strucr1 s1 = { 2, 0 };
const Strucr1 s2 = { 10, 5 };
int arr1[10] = { 0 };
int arr2[3][2] = { {1,2},{6,7},{4,5} };

int main()
{
	Strucr1 S;
	
	cout << s0.i << s0.j << endl;
	cout << s2.i << s2.j << endl;

	return 0;
}