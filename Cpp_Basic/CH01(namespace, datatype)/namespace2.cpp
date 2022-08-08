#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	AAA::BBB::CCC::num1 = 20;
	AAA::BBB::CCC::num2 = 30;

	namespace ABC = AAA::BBB::CCC;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;

	
	char x, y;
	x = -128;
	y = -x;
	cout << x << endl;
	cout << y << endl;

	if (x==y)
	{
		cout << 1 << endl;
	}
	if ((x - y) == 0)
	{
		cout << 2 << endl;
	}
	if ((x + y) == 2*x)
	{
		cout << 3 << endl;
	}
	if (x != -y)
	{
		cout << 4 << endl;
	}

	return 0;
}