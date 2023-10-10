#include <iostream>
using namespace std;

int Uclid(int n, int m);

//n>m
int Uclid(int n,int m)
{
	if (m ==0)
	{
		return n+m;
	}
	return Uclid(m, (n % m));	
}

int main()
{

	cout << Uclid(12,4) << endl;

	return 0;
}