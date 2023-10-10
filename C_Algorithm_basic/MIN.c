#include <stdio.h>
#include <limits.h>
int main()
{
    int min = INT_MAX;  // 정수 형식 데이터 중 가장 큰 값
                        // => 2147483647
    int data[5] = { 2, 5, -3, 7, -1};
    // 배열이 차지하는 전체 공간과 요소의 개수는 sizeof 연산자를 활용하면 간단하게 구할 수 있습니다.
    int N =sizeof(data) / sizeof(int);

    for (int i = 0; i < N; i++)
    {
        /* code */
        if (data[i] < min)
        {
            min = data[i];
        }
        
    }
    

    printf("최솟값: %d\n", min);
}