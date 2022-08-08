//for는 반복 횟수를 알고 있을때 주로 사용

#include <stdio.h>

int main()
{
	int i;
	//	초기화;조건식;증감식
	for (i = 1; i <= 5; i++)
		printf(" %d,",i);
	printf("		i : %d \n", i);

	for (i = 5; i > 0; i--)
		printf(" %d,", i);
	printf("		i : %d \n", i);

	for (i = 1; i <= 5; i+=2)
		printf(" %d,", i);
	printf("		i : %d \n", i);

	for (i = 10; i <= 5; i++)
		printf(" %d,", i);
	printf("		i : %d \n", i);

	for (i = 1; i <= 5; i++);//null 문장
		printf(" %d,", i);
	printf("		i : %d \n", i);

	i = 1;
	for (; i <= 5; i++)//초기화 외부에서 받아오기 가능
	printf(" %d,", i);
	printf("		i : %d \n", i);

	for (i = 1; i <= 5; i)//증감식은 실행문에서 사용 가능
		printf(" %d,", i++);
	printf("		i : %d \n", i);
}