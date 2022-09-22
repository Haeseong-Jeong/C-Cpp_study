#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//일반 배열
	int arr[5] = { 1,54,6,3,4 };
	printf("%d\n", arr[2]);

	//배열 선언 후 포인터로
	int* ptr;
	int arr2[5] = { 1,8,6,46,12 };
	ptr = arr2;
	printf("%d\n", ptr[2]);

	//포인터와 malloc을 활용한 배열 동적할당
	int* ptr2 = (int*)malloc(sizeof(int) * 5);
	ptr2[0] = 4;
	ptr2[1] = 56;
	printf("%d\n", ptr2[0]);

	//정수형 포인터 배열, 요소가 포인터로 구성
	int* ptr3[5] = { 1,8,9,15,43 };
	printf("%d\n", ptr3[0]);
	printf("%d\n", ptr3[1]);

	//이중포인터와 malloc을 활용한 정수형 포인터 배열 동적할당 -> 총 4 * 5 = 20 
	int** ptr4 = (int**)malloc(sizeof(int*) * 5);
	//
	for (int i = 0; i < 5; i++)
	{
		ptr4[i] = malloc(sizeof(int));// 배열을 4씩 정수형 포인터를 담을 그릇으로 만든다 4/4/4/4/4
	}
	ptr4[0] = 21;
	ptr4[1] = 554;
	printf("%d\n", ptr4[0]);
} 