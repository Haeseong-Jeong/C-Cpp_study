#include <stdio.h>
#include <string.h>

typedef struct _Person
{
	int age;
	int phone;
	char sex[10];
	char adress[20];
	struct _Person* next;
}person;



int main()
{
	//����ü ���� ���� 2���� ���
	// 1. ���� ���ÿ� �ʱ�ȭ 
	// 2. ���� �� ����ü �����͸� ������ ���������� �Ҵ�
	person p0;
	person p6;
	person p1 = { 27, 01055103371,"male","korea" };
	person p2 = { 25, 01055103371,"female","US" };
	person p3 = { 24, 01055103371,"female","UK" };

	person* p4;
	p4 = &p0;
	p4->age = 50; p4->phone = 55103371; strcpy_s(p4->sex,10, "male"); strcpy_s(p4->adress,20, "China");
	
	person* p5;
	p5 = &p6;
	p5->age = 19; p5->phone = 01055103371; strcpy_s(p5->sex,10, "male"); strcpy_s(p5->adress,20, "Japan");

	person* c = NULL;
	person* d = NULL;

	/*person* c = &p1;
	person* d = &p2;*/

	c = &p1;
	p1.next = &p2;
	p2.next = &p3;
	p3.next = p4;
	p4->next = p5;
	p5->next = NULL;
	d = c;

	int i = 1;
	while (d != NULL)
	{
		
		printf("[����ü��� %d] age = %d, phone = %d, sex = %s, adress = %s\n", i, d->age, d->phone, d->sex, d->adress);
		i += 1;
		d = d->next;
	}

	return 0;
}