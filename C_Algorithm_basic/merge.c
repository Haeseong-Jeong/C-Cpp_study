#include <stdio.h>
#include <limits.h>
#include <stdbool.h> // 참 거짓 bool 연산 헤더
#include <memory.h> //배열 복사 헤더

int main()
{
    //[1-1] data
    int dataM[] = {1, 5, 11};
    int M = sizeof(dataM) / sizeof(int);
    
    int dataN[] = {2, 4, 6, 8, 10};
    int N = sizeof(dataN) / sizeof(int);

    int O = M + N;
    int merge[O] = {0,};


    //[2] process
    int i = 0; int j = 0; int k = 0;
/*
    while (O != k)
    {
        if (dataM[i] > dataN[j])
        {
            merge[k] = dataN[j];
            j = j + 1;
            k = k + 1;
        }
        
        else
        {
            merge[k] = dataM[i];
            i = i + 1;
            k = k + 1;
        }
        
        if ( (M)==i )
        {
            while ( O != k )
            {
                merge[k] = dataM[j];
                j=j+1;
                k=k+1;
            }
        }

        if ((N)==j )
        {
            while ( O != k )
            {
                merge[k] = dataM[i];
                i=i+1;
                k=k+1;   
            }
        }
    }    
*/
    //[2-1] M 과 N 배열 비교하며 merge, 둘 중 하나 끝나면 멈춤
    while ( i < M && j < N ) // 둘다 참이면 실행된다. ->하나라도 끝나면 멈춤
    {
        if (dataM[i] < dataN[j])
        {
            merge[k++] = dataM[i++];
        }
        else
        {
            merge[k++] = dataN[j++];
        }
    }

    //[2-2] 나머지 merge
    while ( i < M )
    {
        merge[k++] = dataM[i++];
    }
    while ( j < N )
    {
        merge[k++] = dataN[j++];
    }
    

    //[3] output
    for (int x = 0; x < k; x++)
    {
        printf("%d ", merge[x]);
    }
    
}