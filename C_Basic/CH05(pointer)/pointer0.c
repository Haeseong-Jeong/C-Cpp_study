#include <stdio.h>

int main()
{
    // 1. 포인터의 개념
    int x = 9;
    int *ptr_x;
    ptr_x = &x;

    printf("변수 x 의 값 : %d \n", x);
    printf("변수 x 의 값: %d \n", x);
    printf("변수 x 의 주소 값: %d \n",&x);
    printf("변수 x 의 주소 값(포인터): %d \n",ptr_x);
    printf("포인터 ptr_x 가 가키는 값( = x): %d \n",*ptr_x);
    printf("\n");
    printf("\n");

    // 2. 포인터 배열 (포인터 변수를 가진 배열)
    int num01 = 10, num02 = 20, num03 = 30;
    int* arr[3] = {&num01, &num02, &num03};
        // 배열안의 변수가 포인터변수

    for (int i = 0; i < 3; i++)
    {
        printf("%d \n",*arr[i]);
    }
    // arr[i]에 들어있는 값이 주소값이고 *을 붙였으니 num의 값 자체를 반환
    
    printf("\n");
    printf("\n");


    // 3. arr[i] = *(arr+i)
    int arr3[2] = {0,1};
    int *ptr = arr3;
    // 일반배열에서 배열이름이 주소이름 
    // arr = arr[0] 의 주소값
    // arr + 1 == arr[1] 의 주소값

    printf("%d %d \n", *(ptr + 0), *(ptr+1));
    printf("%d %d \n", ptr[0], *(ptr+1));
    printf("%d %d \n", *(arr3 + 0), *(arr3+1));
    printf("%d %d \n", arr3[0], arr3[1]);
    // 전부 같은 값 나온다

    printf("\n");
    printf("\n");
    
    
    
    
    // 4.배열 포인터 (배열을 가리킬 수 있는 포인터를 의미)
    int arr2[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
        }; 

 

    printf("%d\n", *arr2[0]);
    //배열이름자체가 배열맨앞 요소의 주소 값이다.

    printf("%d\n", *arr2[1]);

}