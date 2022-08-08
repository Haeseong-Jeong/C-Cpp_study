#include <stdio.h>
#include <stdlib.h>

//제어문 : 조건제어, 반복제어, 기타제어
//조건제어 : if, switch
//반복제어 : for, while, do..while
//기타제어 : break, continue, goto

int main()
{
	int score;

	printf("점수 : ");
	scanf("%d", &score);

	//프로그램 즉시종료 명령문 = exit(1)/ exit(0)
	if (score > 100 || score < 0)
	{
		printf(" 점수는 0 ~ 100 입력 \n");
		exit(1);
	}
		
	if (score >= 90)
		printf("%d, A 학점 \n", score);
	else if (score >= 80)
		printf("%d, B 학점 \n", score);
	else if (score >= 70)
		printf("%d, C 학점 \n", score);
	else if (score >= 60)
		printf("%d, D 학점 \n", score);

	else
		printf("%d, 노력해라 \n", score);

	printf("END\n");
	return 0;
}