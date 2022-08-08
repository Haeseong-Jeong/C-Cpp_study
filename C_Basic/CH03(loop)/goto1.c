#include <stdio.h>

int main()
{
	char ch,i;
	char in_char;

	printf("input char ?");
	in_char = getchar();

	for ( i = 1; i <= 3; i++)
	{
		ch = 'A';
		while (ch <= 90)
		{
			printf("%c ", ch);
			if (ch == in_char)
			{
				//break;
				goto move;
			}
			ch++;
		}
		printf("\n");
	}
	//d
move://레이블명, goto에서 보낼 이름, 자신의 함수내부에서만 이동가능
	printf("End \n");

	return 0;
}