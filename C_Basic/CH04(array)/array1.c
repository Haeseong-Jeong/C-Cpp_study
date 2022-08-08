#include <stdio.h>
#define STUDENT 5

int main()
{
	int score[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf(" %d번째 학생의 성적 : ", i+1);
		scanf("%d", score+i);
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	printf(" \n 학생 성적의 평균 : %d", (int)(sum / 5));
}