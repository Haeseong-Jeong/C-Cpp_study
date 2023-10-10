#include <stdio.h>

// 서로 교환하는 함수, 포인터를 활용
// 포인터는 전역에서 활용가능하니까 좋음?
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void)
{
    int x = 1;
    int y = 6;
    swap(&x,&y); // swap함수에 x y의 주소 인풋
    printf("x = %d\ny = %d\n", x, y);
}