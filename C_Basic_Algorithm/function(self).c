#include <stdio.h>

//함수 선언
int factorial(int n); 

//메인 함수
int main()
{
    int a;
    int result;
    printf("정수입력 :");
    scanf("%d",&a);

    result = factorial(a); //result =  팩토리얼에 a 넣기 
    printf("%d 팩토리얼 : %d \n", a, result);
    return 0;
}

// 함수 정의
int factorial(int n)
{
    if (n<=1)
        return 1;
    else // 1 보다 크면 factorial 다시 input
        return n*factorial(n-1);
}