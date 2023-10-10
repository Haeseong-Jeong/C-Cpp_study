#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    //[1] input data
    int data[8] = {1, 5, 1, 6, 10, 2, 19, 9};
    int N = sizeof(data) / sizeof(int);
    int serodata[N] = data[:];
    //[2] process
    for (int i = 0; i < N; i++)
    {
        serodata[i] = data[i];
        for (int j = i+1; j < N; j++)
        {
            if (data[i] > data[j])
            {
                //data[i] = y;
                //data[j] = x;'
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
                    
        }
        
    }
    

    //[3] output
    for (int k = 0; k < N; k++)
    {
        printf("%d ", data[k]);
    }
    
}