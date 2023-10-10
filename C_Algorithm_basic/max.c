#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MIN;  // 정수 형식 데이터 중 가장 작은 값으로 초기값 설정
                        // => -2147483648
    int data[5] = { -2, -5, -3, -7, -1};
    int N =sizeof(data) / sizeof(int);

    for (int i = 0; i < N; i++) // 0 ~ 4 -> 배열 개수 만큼 반복
    {
        if (data[i] > max) // 현재 배열값이 max 값보다 크다면
        {
            max = data[i]; //max 값을 현재 데이터로 치환
        }
    }
    printf("최댓값: %d\n", max);
}