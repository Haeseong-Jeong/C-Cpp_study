#include <stdio.h>

int salary = 3500000;//전역변수

int main()
{
	int age = 23;

	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcA(age);
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	funcB();
	printf("main() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);

	funcD();
	funcD();
	funcD();

	return 0;
}

funcD()
{	
	int sum1 = 1;				//지역변수
	static int sum2 = 1;		//정적변수(전역변수는 아니라 다른 함수에서 못씀)
	// 다시 함수 사용할때 마지막값의 변수를 사용하고 싶을때 static으로 저장해놓기

	printf("sum1 : %d, sum2 : %d \n", sum1++, sum2++);
}

funcA(int age)
{
	printf("funcA() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 35;
	salary += 200000;
}

funcB()
{	//함수내 변수는 함수가 끝나면 소멸됨
	int age = 23;
	int salary = 1000;

	printf("funcB() age : %d,%p salary : %d,%p \n", age, &age, salary, &salary);
	age = 40;
}