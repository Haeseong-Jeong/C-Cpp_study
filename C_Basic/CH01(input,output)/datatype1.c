#include <stdio.h>
#define EQ "======================="  //매크로 상수
#define MSG "Sam_Workplace"    //매크로 상수
#define SUM(x,y) x+y          //매크로 함수
// #로 시작하는 구문을 전처리문이라 한다.

int main()
{
	printf("C 언어의 자료형(DataType) \n");
	printf(" %s \n", EQ);
	printf(" %s \n", MSG);

	//변수나 배열의 선언은 자료형의 크기만큼 메모리를 할당받고,
	//컴파일러에게 자료형을 알린다.
	char ch; //메모리할당만 나중에 자료는 대입
	int age = 20; //초기화
	double height = 175.1;
	const float PI = 3.14159; //변수를 상수화 (반드시 초기화 해야함)

	ch = 'A';
	printf("변수의 값 : % c, % d, % 1f, % f \n", ch, age, height, PI);
	printf("변수의 주소 : %p, %p, %p, %p \n", &ch, &age, &height, &PI);

	age = 27;
	//PI = 1.5; 못 바꿈
	printf("%c, %d, %1f, %f \n", ch, age, height, PI);

	printf("%d, %d, %d \n", sizeof(char), sizeof(int), sizeof(double));
	printf("%d, %d, %d \n", sizeof(ch), sizeof(age), sizeof(height));

	printf(" %d \n", SUM(100,200));
	printf(" %s \n", EQ);


	return 0;
}