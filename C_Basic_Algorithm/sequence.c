#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 0; i <= 20; i++)
    {
        if (i%2!=0)
        {
            sum += i;
            printf("%d ", i);
        }
    }
    
    printf("\n1부터 20 까지의 홀수의 합: %d\n", sum);
}