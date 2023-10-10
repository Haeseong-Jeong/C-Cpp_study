// head노드가 구조체 변수일때 (전역변수)
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct _Node
{
	int data;
	struct _Node* next;
}Node;

Node head = { 0,NULL };

void pushfront(int data);
void printlist();
void deletelist();
int getlength();
void pushback(int newdata);

int main()
{
	pushfront(20);
	pushback(30);
	pushfront(20);
	pushback(30);
	pushfront(20);
	pushback(30);
	
	printlist();
	printf("length : %d\n", getlength());
	deletelist();
	printf("length : %d\n", getlength());
	printlist();

	pushfront(20);
	pushback(30);
	pushfront(20);
	pushback(30);
	printlist();

	deletelist();
	printf("length : %d\n", getlength());
	printlist();

	return 0;
}


void pushfront(int newdata)
{
	//1. 새로운 노드 생성 -> 새노드의 다음주소는 헤드다음주소 <-> 헤드다음주소는 새노드 주소 치환
	Node* newnode = malloc(sizeof(Node));
	newnode->data = newdata;

	newnode->next = head.next;
	head.next = newnode;
}


void pushback(int newdata)
{
	Node* newnode = malloc(sizeof(Node));
	newnode->data = newdata;

	Node* step;
	step = &head;
	while (step->next != NULL)
	{
		step = step->next;
	}
	newnode->next = step->next;//step->next is NULL
	step->next = newnode;	
}

void printlist()
{
	Node* step;
	step = &head;
	while (step->next != NULL)
	{
		printf("%d->", step->data);
		step = step->next;
	}
	printf("%d->NULL\n", step->data);
}

void deletelist()
{
	Node* step;
	Node* temp;
	step = head.next;
	while (step->next != NULL)
	{
		temp = step->next;
		free(step);
		step = temp;
	}
	free(step);
	head.next = NULL;
}

int getlength()
{
	int count = 0;
	Node* step;
	step = &head;
	while (step->next != NULL)
	{
		count += 1;
		step = step->next;
	}
	return count;
}