#include <stdio.h>

int main()
{
    int num;
    
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            printf("스위치 %d on",num);
            break;

        case 2:
            printf("스위치 %d on",num);
            break;

        case 3:
            printf("스위치 %d on",num);
            break;

        default:
            printf("1,2,3 중에 넣으세요");
            break;
    }
}