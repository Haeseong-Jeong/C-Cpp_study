#include <stdio.h>

int main()
{
	int x ;

	printf("성별 ? (0:남,1:여) ");
	scanf("%d", &x);

	//printf("%s \n", x==0 ? "남성" : "여성");
	printf("%s \n", x==0 ? "남성" : x==1 ? "여성" : "입력오류");

	int n1 = 100, n2 = 200;
	int sum = 0;

	//복합대입연산자
	sum += n1; //sum = sum + n1;
	sum += n2;
	printf("sum : %d \n", sum);

	return 0;
}