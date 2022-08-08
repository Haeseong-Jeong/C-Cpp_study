#include <stdio.h>

int main()
{
	//포인터변수 : 변수의 시작주소이거나 또는 1차원 배열의 시작주소를 저장하는 포인터
	double d;//변수(값)
	double *dp;//포인터 변수, 변수 앞에 * 붙임
	int* a;//자료형에 붙여도 됨
	char* ptr;

	d = 1.5;
	printf("%1f, %p \n", d, &d);

	dp = &d;
	//간접참조("*" 포인터 연산자)
	printf("%1f, %p \n", *dp, dp);
	//printf("%1f, %u \n", *dp, dp);//unsigned 10진수?

	ptr = &d;
	printf("%p \n", ptr);
	printf("%1f \n", *ptr);
	//저장된 주소로 찾아감 -> 자기가 할당된 크기만큼 접근 
	//따라서 변수와 포인터 자료형은 같은값으로 해야함

	//선언되는 자료형과는 상관없이 32bit/64bit 에서 포인터는 4byte/8byte
	printf("%d, %d, %d \n", sizeof(d), sizeof(dp), sizeof(ptr));


	return 0;

}