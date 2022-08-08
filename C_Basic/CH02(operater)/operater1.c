#include <stdio.h>

int main()
{
	int x = 100, y = 200;

	printf("x:%d \n", x);
	++x;
	printf("x:%d \n", x);
	x--;
	printf("x:%d \n", x);

	//전위연산은 연산을 먼저
	//후위연산은 연산을 나중에
	printf("x:%d ,y: %d \n", ++x, y++);
	printf("x:%d ,y: %d \n", x, y);
	printf("x:%d ,y: %d \n", --x, y--);
	printf("x:%d ,y: %d \n", x, y);
	return 0;
}