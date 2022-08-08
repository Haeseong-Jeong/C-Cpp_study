#include <stdio.h>
void func_1(void);
void func_2(void);
void func_3(void);

int main(void)
{
	
	//func_1();
	//func_2();
	func_3();

	return 0 ;

}

void func_1(void)
{
    int first, second;
	
	printf("두 수를 입력하세요 ? ");
	scanf("%d%d", &first, &second);//1.space bar로 구분(한칸 블랭크)
	//2. tab키
	//3. enter키

	printf("first : %d, second : %d \n", first, second);
}

void func_2(void)
{
     int first, second;
	 char op = 0;
	 
	 printf("전화번호를 입력하세요 ? ");
	 //scanf("%d%c%d", &first,&op, &second);
	 scanf("%d%*c%d", &first, &second);

	 printf("first : %d, second : %d \n", first, second);
	 printf("op : %d, %c \n", op, op);
}

void func_3(void)
{
     int first, second;
	 
	 printf("5자리이상 숫자를 입력하세요 ? ");
	 scanf("%3d%d", &first, &second);//연속적으로 입력을 받아도 자리수로 나눠 읽을수 있다.
	 
	 printf("first : %d, second : %d \n", first, second);
}
