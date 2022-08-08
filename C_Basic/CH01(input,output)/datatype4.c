#include <stdio.h>

int main()
{
	int x;
	float y;

	x = 100, y = 30.0;

	printf("%d \n", x / 30);
	printf("%f \n", x / 30); // 쓰레기값 나옴
	printf("%f \n", x / y); // 묵시적 형변환

	printf("%f \n", (float)x / 30);
	//cast 연산자 (형변환 연산자) 변수앞에 자료형, 그 순간만 형변환 해준다.
	
	typedef long long int lli;
	long long int n1 = 2700000000;
	lli n2 = 2800000000;
	printf("%lld \n", n1);
	printf("%lld \n", n2);

	return 0;
}