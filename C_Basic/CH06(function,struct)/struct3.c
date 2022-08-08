#include <stdio.h>
#define EMP_SZ 30

typedef struct EMPLOYEE
{
	char name[20];
	int salary;
	float height;
	char comAddt[100];
} EMP;

struct EMPLOYEE emps[EMP_SZ];
int Cn = 0;

int main()
{
	int choice, stop = 1;

	emp_load();

	while (stop)
	{
		printf("\n1. 사원정보 입력 \n");
		printf("2. 사원정보 출력 \n");
		printf("3. 사원정보 검색 \n");
		printf("4. 프로그램 저장 \n");
		printf("5. 프로그램 종료 \n");
		printf("Select ? (1~4)");
		scanf("%d%*c", &choice);

		switch (choice)
		{
		case 1: emp_input();
			break;
		case 2: emp_output();
			break;
		case 3: emp_find();
			break;
		case 4: emp_save();
			break;
		case 5: stop = 0;
			break;
		}
	}
	printf("END\n");

	return 0;
}

emp_input()
{
	int i;
	for (i = Cn; i < EMP_SZ; i++)
	{
		printf("성명 : (입력종료:'end') ");
		gets(emps[i].name);
		if (strcmp(emps[i].name, "end") == 0)
		{
			break;
		}
		printf("월급 : ");
		scanf("%d", &emps[i].salary);
		printf("키 : ");
		scanf("%f%*c", &emps[i].height);
		printf("주소 : ");
		gets(emps[i].comAddt);
	}
	Cn = i;
}

emp_output()
{
	int i,sum=0;
	for (i = 0; i < Cn; i++)
	{
		printf("%s, %d, %.2f, %s \n"
			, emps[i].name
			, emps[i].salary
			, emps[i].height
			, emps[i].comAddt);
		sum += emps[i].salary;
	}
	printf("==================================\n");
	printf("월급평균 : %.2f \n", (float)sum / Cn);
	printf("==================================\n");
}

emp_find()
{
	char s_name[20];
	int i, found;

	while (1)
	{
		printf("\n검색할 성명 : (검색종료 : end)");
		gets(s_name);
		if (strcmp(s_name,"end")==0)
		{
			break;
		}
		found = 1;

		for ( i = 0; i < Cn; i++)
		{
			if (strcmp(emps[i].name, s_name) == 0)
			{
				printf("%s, %d, %.2f, %s \n"
					, emps[i].name
					, emps[i].salary
					, emps[i].height
					, emps[i].comAddt);
				found = 0;
				//break;(동명이인 없으면 바로 break)
			}
		}
		if (found)
		{
			printf("%s, Not found", s_name);
		}
	}

}

emp_save()
{
	FILE* fp;//파일 포인터

	//1. 스트림연결
	fp = fopen("struck3.dat", "wb");
	if (fp== NULL)
	{
		printf("emp_save() Error \n");
		exit(1);
	}

	//2.save
	fwrite(&Cn, sizeof(Cn), 1, fp);
	fwrite(emps, sizeof(struct EMPLOYEE), Cn, fp);

	//3.스트림닫기
	fclose(fp);

	printf("struct3.dat 저장. \n");

}

emp_load()
{
	FILE* fp;//파일 포인터
	//1. 스트림연결
	fp = fopen("struck3.dat", "rb");
	if (fp == NULL)
	{
		printf("emp_load() Open Error \n");
		return;
	}

	//2.save
	fread(&Cn, sizeof(Cn), 1, fp);
	fread(emps, sizeof(struct EMPLOYEE), Cn, fp);

	//3.스트림닫기
	fclose(fp);

	printf("struct3.dat 로드. \n");

}