#include <stdio.h>
#include <math.h>
#define PI 3.14159
//반지름을 입력 받아 원의 넓이, 둘레 구하여 출력

/*
실행결과
반지름 ? 7
원의 넓이 : ???
원의 둘레 : ???
*/

double Area(int x);
double Cir(int x);

int main()
{
	//1. 메모리 할당 (변수 선언)
	int radius;
	double area, cir;

	//2. 데이터 입력
	printf("반지름 ? ");
	scanf("%d", &radius);

	//3. 프로세스 처리(계산)
	area = Area(radius);
	cir = Cir(radius);

	//4. 출력
	printf(" 원의 넓이 :  %f \n", area);
	printf(" 원의 둘레 :  %f \n", cir);

	return 0;
}

double Area(int x)
{
	return PI * pow(x, 2);
}

double Cir(int x)
{
	return 2 * PI * x;
}