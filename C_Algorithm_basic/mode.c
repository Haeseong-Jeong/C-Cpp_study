#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //[1] first setting
    int max = INT_MIN; // 주어진 데이터의 최대값 추출 그릇
    int max2 = INT_MIN; // 데이터 중 최대 빈도 개수
    int data[] = {1,1,5,9,9,11,11,11,16};
    int N = sizeof(data) / sizeof(int); //주어진 데이터 개수
    int find = 0; // 최대 빈도 값
    
    // [2-1] 주어진 데이터의 최대값 추출
    for (int i = 0; i < N; i++)
    {
        /* code */
        if (data[i] > max)
        {
            max = data[i];
        }
    }
    
    // [2-2] max 기준으로 [0 ~ max] 인덱스를 갖는 배열 생성
    int end = max + 1;
    int* arr = (int*) malloc(sizeof(int)*(end));
    memset(arr,0,sizeof(int)*(end));

    // 원본배열 데이터 값을 인덱스배열에 인덱스로 카운트
    for (int j = 0; j < N; j++)
    {
        arr[data[j]]++;
    }
    
    // [[2-3] 빈도 배열에서 빈도값과 인덱스 추출
    
    for (int i = 0; i < end; i++)
    {
        if (arr[i] > max2)
        {
            max2 = arr[i];
            find = i;
        }
    }

    // [3] output
    printf("최빈값은 %d 이고, %d번 나와요.", find, max2 );
}
