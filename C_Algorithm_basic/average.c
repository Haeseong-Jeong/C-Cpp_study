#include <stdio.h>

int main()
{
    int data[5] = { 90, 65, 78, 50, 95 }; // 과목 점수 배열
    int sum = 0; //점수 누적 합
    int count = 0; //과목 갯수 누적 합
    int N = sizeof(data) / sizeof(int); //(4*5)/(4) = 5

    for (int i = 0; i < N; i++) // 0 ~ 4 -> 과목 수 만큼 반복
    {
        if (data[i] >= 80 && data[i] <= 95) // 점수가 (80이상, 95 이하) 둘다 만족하면
        {
            sum = sum + data[i]; //점수를 더해라

            count = count + 1; //갯수를 더해라
        }
    }
    double avg = (double) sum / (double)count; //실수형으로 계산
    printf("80점 이상 95점 이하인 자료의 평균: %.2f\n", avg);
}