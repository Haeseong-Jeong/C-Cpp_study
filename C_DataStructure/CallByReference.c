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
	printf(" fucnA �� a %d\n", a);
	printf(" fucnB �� Ga %d\n", Ga);
	printf(" fucnC �� b %d\n", b);

	funcA(&a);
	funcB(&Ga);
	funcC(&b);


	printf(" fucnA �� a %d\n", a); 
	printf(" fucnB �� Ga %d\n", Ga);
	printf(" fucnC �� b %d\n", b);

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