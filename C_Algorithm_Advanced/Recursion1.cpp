#include <iostream>
using namespace std;

int sum(int n);
int factorial(int n);

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + sum(n - 1);
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
int main()
{

	cout << sum(1) << endl;
	cout << sum(100) << endl;

	cout << factorial(0) << endl;
	cout << factorial(3) << endl;
	cout << factorial(4) << endl;

	return 0;
}