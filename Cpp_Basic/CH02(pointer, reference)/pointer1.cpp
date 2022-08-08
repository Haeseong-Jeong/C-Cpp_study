#include <iostream>
using namespace std;

int main()
{

	char c, *pc;
	int i, *pi;
	float f, *pf;
	double d, *pd;

	cout << "char : " << sizeof(c) << "/" << sizeof(pc) << endl;
	cout << "int : " << sizeof(i) << "/" << sizeof(pi) << endl;
	cout << "float : " << sizeof(f) << "/" << sizeof(pf) << endl;
	cout << "double : " << sizeof(d) << "/" << sizeof(pd) << endl;

}