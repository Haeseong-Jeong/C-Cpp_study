#include <iostream>
using namespace std;

int int_add()
{
	return 20 + 30;
}

int main()
{
	double d = 1.5163;

	decltype(d) val0 = d;//double val0 = d;
	cout << val0 << endl;

	decltype(int_add()) val1 = d;//int add의 자료형타입은 int => int val1 = d;
	cout << val1 << endl;
	
	decltype(d) val2 = val1;//d의 자료형은 double => double val2 = 1;
	cout << val2 << endl;
	
	val2 = 3.141519;

	cout << val2 << endl;


}