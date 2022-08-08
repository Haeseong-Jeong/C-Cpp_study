#include <stdio.h>

int main()
{
	int x , y;

	printf(" X = ");
	scanf("%d", &x);
	printf(" Y = ");
	scanf("%d", &y);

	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);
	printf("%d %% %d = %d \n", x, y, x % y);

	return 0;

}