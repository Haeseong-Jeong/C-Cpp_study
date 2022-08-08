#include <stdio.h>

int main()
{
	char c1, c2;

	printf("input c1 = ");
	c1 = getchar();//한 문자만 반환, 길게적으면 맨 앞에 한 문자만
	printf("c1 : %c\n", c1);

	getchar(); //A[enter] 누르면 enter도 하나의 입력으로 인식하니까 getchar로 버림
	//while(getchar() != '\n'); 엔터나오기 전까지 입력 버퍼 다지움

	printf("input c2 = ");
	c2 = getchar();
	printf("c2 : %c\n", c2);

	return 0;
}