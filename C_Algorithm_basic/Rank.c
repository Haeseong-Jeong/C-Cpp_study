#include <stdio.h>
#include <limits.h>
#include <math.h>
/*
int main()
{
    //[1] input data
    int scores[5] = {75, 70, 100, 85, 50};
    int N =sizeof(scores) / sizeof(int);
    int ranking[N] = {0,};
    
    //[2] process
    for (int i = 0; i < N; i++)
    {
        int step = 1;
        for (int j = 0; j < N; j++)
        {
            if (scores[i]<scores[j])
            {
                step = step + 1;
            }
        }
        ranking[i] = step;
    }


    //[3] output
    
    for (int k = 0; k < N; k++)
    {
        printf("%d 등: %d 점\n", ranking[k], scores[k]);
    }
}
*/

int main()
{
    //[1] input data
    int scores[5] = {52, 100, 63, 87, 96};
    int N =sizeof(scores) / sizeof(int);
    int ranking[N] = {0,};
    
    //[2] process
    for (int i = 0; i < N; i++)
    {
        ranking[i] = 1; // i 번째 점수가 1등으로 시작
        for (int j = 0; j < N; j++)
        {
            
            if (scores[i]<scores[j]) // 나보다 큰 점수 만나면
            {
                
                ranking[i] = ranking[i] +1; // 등수가 하나씩 밀림
            }
        }
    }

    
    //[3] output (등수대로 출력하기)

    for (int k = 1; k < N+1; k++) // k = 1 부터 5 까지 반복
    {
        for (int i = 0; i < N; i++)
        {
            if (ranking[i]==k)  // k와 등수가 같으면 출력해라
            {
                printf("%d 등: %3d 점\n", ranking[i], scores[i]);
            }
            
        }
    }
}
