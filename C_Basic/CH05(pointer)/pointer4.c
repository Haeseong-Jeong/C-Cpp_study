#include <stdio.h>

int* swap(int* a, int* b);

int main()
{
	int x = 100, y = 200;
	int *sal;

	printf("[before] x : %d, y : %d \n", x, y);
	//swap(x,y);//call by value
	sal = swap(&x, &y);//call by reference
	printf("[after] x : %d, y : %d \n", x, y);
	printf("salary : %d \n", *sal);
	return 0;
}

//swap(int a, int b)
int* swap(int *a,int *b)
{
	int tmp;
	static int salary = 3700000;

	tmp = *a;
	*a = *b;
	*b = tmp;
	return &salary;
}