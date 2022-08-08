#include <stdio.h>
#include <limits.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int gap = INT_MAX;  // 정수 형식 데이터 중 가장 큰 값
                        // => 2147483647
    int data[5] = { 2, 5, -3, 7, -1};
    int result = 0;
    int x;
    printf("정수를 입력하세요: ");
    scanf("%d", &x);
    // 배열이 차지하는 전체 공간과 요소의 개수는 sizeof 연산자를 활용하면 간단하게 구할 수 있습니다.
    int N =sizeof(data) / sizeof(int);

    for (int i = 0; i < N; i++)
    {
        
        if ( abs(x - data[i]) < gap)
        {
            gap = x - data[i];
            result = data[i];
        }
        
    }
    

    printf("정수 %d의 근사값: %d\n", x, result);
}