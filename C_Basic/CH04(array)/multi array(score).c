#include <stdio.h>

int main(void)
{
    int score[5][2]; //5명의 수학, 영어 점수 배열
    int total[2] = {0,}; //수학, 영어 총합 배열
    int i;

    for (int i = 1; i <= 5; i++)
    {
        //영어, 수학 점수 2차원 배열로 입력 받기
        printf("%d번 학생의 수학, 영어 점수 : ", i);
        scanf("%d %d", &score[i][0], &score[i][1]);
                      // 수학점수    //영어 점수
    }
    for (int j = 1; j <= 5; j++)
    {
        total[0] = total[0] + score[j][0]; //토탈 0 = 수학점수 누적합
        total[1] = total[1] + score[j][1]; //토탈 1 = 영어점수 누적합
    }

    printf("\n\n 5명의 수학점수 합계 : %d\n",total[0]);
    printf("\n\n 5명의 영어점수 합계 : %d\n",total[1]);
}