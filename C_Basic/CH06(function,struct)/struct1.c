#include <stdio.h>

//구조체(): 관련이 있는 데이터들을 하나의 자료형으로 만들어 사용가능하도록 만듬
// 사용자 정의 자료형이다. 어떠한 자료형이 와도 된다.


int main()
{
	typedef struct EMPLOYEE
	{
		char name[20];
		int salary;
		float height;
		char comAddt[100];
	} EMP ;

	struct EMPLOYEE emps = { "홍길동",350000, 175, "서울시 강남구 100" };
	struct EMPLOYEE *ptr;//구조체 포인터 변수

	EMP tmp;


	printf("%d, %d \n", sizeof(emps), sizeof(struct EMPLOYEE));
	printf("emps : %p, %p \n", &emps, &emps.name);
	
	printf("%s, %d, %.2f, %s \n", emps.name, emps.salary, emps.height, emps.comAddt);
	
	tmp = emps;

	printf("%s, %d, %.2f, %s \n\n\n", tmp.name, tmp.salary, tmp.height, tmp.comAddt);

	printf("ptr sizeof : %d \n", sizeof(ptr));

	ptr = &emps;//-> 구조체 포인터 연산자
	printf("%s, %d, %.2f, %s \n", ptr->name, ptr->salary, (*ptr).height, (*ptr).comAddt);

	return 0;
}