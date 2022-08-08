#include <stdio.h>
#include <math.h>

//함수 : 어떤 일을 처리하는 논리적인 코드들의 집합
//함수 사용 : 1.함수정의 2.함수호출 3.함수선언(선택사항)

//함수선언은 컴파일러에게 함수의 원형(형식)을 알린다.
//이를 생략하면 컴파일러는 모든 인자를 int로 간주 한다.
void funcA();//3.함수선언
void funcB(int salary);
int funcD();
//float funcE(int money, float rate); 
//main함수 위에 함수를 만들면 선언 생략가능 / 하지만 비추

float funcE(int money, float rate)
{
	printf("funcE() %d, %f. \n", money, rate);
	//printf("funcE() 세금 :%f. \n", money*rate);
	return money * rate;
}

int main()
{
	int salary = 3500000;//지역변수 = 자신이 속한 함수에서만 사용됨
	int sudang;
	float tax;
	
	printf("main() start. \n");
	//funcA();//funcA(무인수)

	funcB(salary);//funcA(실인수)
	sudang = funcD();
	printf(" 수당 : %d. \n",sudang);

	tax = funcE(salary + sudang, 0.03);
	printf("실수령액 : %f. \n",(salary+sudang),tax);

	printf("10의 제곱근 : %lf \n", sqrt(10.0));

	printf("main() end. \n");
	return 0;
}



//함수 정의
void funcA()	//함수 헤더
{		//함수 바디
	printf("funcA() start. \n");
	return; //반환값이 없으니 void
	printf("funcA() end. \n");
}

//실인수와 가인수는 개수와 타입이 같아야 한다.
void funcB(int salary)//가인수
{
	printf("funcB() salary %d. \n", salary);
	printf("funcB() end. \n");
	return;
}

int funcD()
{
	int over_time = 15;

	//printf("funcD() 수당 %d. \n", over_time * 3700000);

	return over_time * 3700000;
}