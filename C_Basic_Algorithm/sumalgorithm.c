#include <stdio.h>

int main()
{
    //input 주어진 조건
    int sum = 0;
    int scores[6] = {100, 70, 50, 37, 90, 95};
    int N = sizeof(scores) / sizeof(int);
    // 처리 알고리즘
    for (int i = 0; i < N; i++)
    {
       if (scores[i] >= 80)
       {
           sum += scores[i];
       }
    }
    
    // output 출력
    printf("%d명의 점수 중 80점 이상의 총점 : %d\n", N, sum);
}