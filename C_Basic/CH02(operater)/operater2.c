#include <stdio.h>

int main()
{
	int x = 70, y = 150;

	//관계연산자
	printf("%d \n", x > y);
	printf("%d \n", x < y);
	printf("%d \n", x == y);
	printf("%d \n\n", x != y);

	//논리연산자
	printf("%d \n", x >= 100 && y >= 100);
	printf("%d \n", x >= 100 || y >= 100);
	x = 0;
	printf("%d, %d \n", !x, !y);

	return 0;
}