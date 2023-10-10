#include <stdio.h>
#include <limits.h>
#include <stdbool.h> // 참 거짓 bool 연산 헤더
#include <memory.h> //배열 복사 헤더

// search 이분탐색은 sort(정렬)가 먼저 선행돼야함
int main()
{
    //[1-1] data
    int data[] = {9, 7, 11, 5, 3, 1}; //-> 1 2 3 5 6 9 10 19
    int N = sizeof(data) / sizeof(int);
    bool flag = false; // 찾으면 ture
    
    //[1-2] input data
    int x; printf("정수 입력 : "); scanf("%d", &x);
    
    
    //계산할 복사본 배열
    int serodata[N];
    memcpy(serodata, data, sizeof(data));

    
    //[2-1] sort process
    for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (serodata[i] > serodata[j])
            {
                int temp = serodata[i];
                serodata[i] = serodata[j];
                serodata[j] = temp;
            }     
        }
    }


    //[2-2] search process
    int start = 0;
    int end = N-1;
    int index = -1;

    while (true)
    {
        if (start==end)
        {
            break;
        }

        int mid = (start + end) / 2;

        if ( serodata[mid] == x )
        {
            index = mid; flag = true; break;
        }
        
        if ( serodata[mid] > x )
        {
            end = mid-1;
        }
        if (serodata[mid] < x)
        {
            start = mid+1;
        }
    }
/*
    while (start <= end) // start 가 end보다 커지면 멈춤?
    {
        int mid = (start + end) / 2;
        if ( serodata[mid] == x )
        {
            index = mid;
            flag = true;
            break;
        }
        if ( serodata[mid] > x )
        {
            end = mid-1;
        }
        else    //(serodata[mid] <= x)
        {
            start = mid+1;
        }
    }
*/ 
    //[3] output
    printf("원본 : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",data[i]);
    }
    printf("\n");

    printf("정렬 후 : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",serodata[i]);
    }

    printf("\n");

    if (flag)
    {
        printf("%d는 %d번째 인덱스에 있습니다.", x,index);
    }
    else
    {
        printf("%d는(은) 없음",x);
    }    
}