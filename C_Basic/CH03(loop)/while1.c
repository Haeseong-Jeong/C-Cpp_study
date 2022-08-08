#include <stdio.h>

int main()
{

	char ch;

	ch = 'a';
	while (ch<=90)
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	//do..while 문 - 한번은 무조건 반복한다.
	ch = 'a';
	do
	{
		printf("%c ", ch);
		ch++;
	} while (ch <= 90);
	
	printf("\n");

	return 0;
}