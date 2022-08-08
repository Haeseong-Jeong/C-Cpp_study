#include <stdio.h>

int main()
{	
	
	//num[2] = *(num+2) = num + 2*자료형크기
	int num[5] = { 100,200,300,400,500 };
	int i, *ptr;
	ptr = num;

	for ( i = 0; i < 5; i++)
	{
		printf("%p : %d, %d, %d, %d \n", &num[i], num[i], *(ptr+i), *(num+i),ptr[i]);//포인터 연산 후 참조
		//printf("%p : %d, %d \n", &num[i], num[i], *ptr+i);//참조 후 값 연산	
	}
	printf("\n");

	char msg[20] = "Hello world.";
	char* p2;

	p2 = msg;
	printf("%c, %c, %c, %c \n", msg[0], *msg, *(msg+1),*p2);
	printf("%p, %s, %s \n", msg, msg, p2);
	

	int x = 0;

	//while (*(p2+x) != '\0') 할 필요 없다. -> while (*p2)
	while (*(p2+x) != '\0')//NULL = '\0'
	{
		printf("%c,", *(p2 + x));
		x++;
	}
	/*
	while (*p2)
	{
		printf("%c,", *p2);
		p2++;
	}*/
	printf("\n\n");


	char *p3;
	p3 = "multi campus !!!";//문자열 상수가 어딘가에 저장되고 그 시작 주소를 반환, 그것을 p3가 받음
	//=> char *p3 = "multi campus !!!" //초기화로 선언해도됨
	
	printf("p3 : %p, %s \n", p3, p3);

	return 0;
}