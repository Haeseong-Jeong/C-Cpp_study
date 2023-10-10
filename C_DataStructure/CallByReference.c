#include <stdio.h>

void funcA(int* x);
void funcB(int *x);

int Ga = 5;
int Gb = 50;
void funcC(int* x);

int main()
{
	int a = 10;
	int b = 100;
	printf(" fucnA 전 a %d\n", a);
	printf(" fucnB 전 Ga %d\n", Ga);
	printf(" fucnC 전 b %d\n", b);

	funcA(&a);
	funcB(&Ga);
	funcC(&b);


	printf(" fucnA 후 a %d\n", a); 
	printf(" fucnB 후 Ga %d\n", Ga);
	printf(" fucnC 후 b %d\n", b);

	return 0;
}

void funcA(int*x)
{
	*x = 20;
}

void funcB(int *x)
{
	*x = 20;
}

void funcC(int* x)
{
	*x += Gb;
}