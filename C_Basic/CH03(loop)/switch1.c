#include <stdio.h>

int main()
{
	int choice, stop = 1;
	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 프로그램 종료 \n");
		printf("Select ? (1~4)");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: stop = 0;
			break;
		}
	}
	printf("END\n");


	return 0;
}


emp_input()
{
	printf("입력함수 \n");
}

emp_output()
{
	printf("출력함수 \n");
}

emp_find()
{
	printf("검색함수 \n");
}