// head��尡 ����ü ������ �����϶� (��������)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct _node
{
	char* data;
	struct _node* next;
	struct _node* prev;
}Node;

//All 0
Node* head; //ù��° ����� �ּҸ� �� �����ϴ� ������, �̸��� head

int isempty()
{
	Node* H = &head;
	if (H->next == NULL)
	{
		return 1;
	}
	return 0;
}

void push_rear(char* data)
{
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = data;
	
	Node* step = &head;//head��� ����ü�� �ּҸ� �����´�. 
	while (step->next != NULL)
	{
		step = step->next;
	}
	tmp->next = NULL;
	step->next = tmp;
}

void push_front(char* data)
{
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = data;

	Node* H = &head;
	tmp->next = H->next;
	H->next = tmp;
}

void print_node()
{
	Node* step = &head;
	while (step->next != NULL)
	{
		printf("%s -> ", step->data);
		step = step->next;
	}
	printf("%s -> NULL\n", step->data);
}

void push_after(char* nodedata, char* data)
{
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = data;

	Node* step = &head; 
	step = step->next;//head��� ������ ����ü�� �ּҸ� �����´�.

	while (strcmp(step->data, nodedata) != 0)
	{
		step = step->next;
	}
	tmp->next = step->next;
	step->next = tmp;
}

void remove_data(char* data)
{
	if (isempty() == 1)
	{
		printf("list is empty\n");
		return;
	}

	Node* step = &head;
	
	while (strcmp(step->next->data, data) != 0)
	{
		step = step->next;
	}


}


void remove_first()
{
	if (isempty() == 1)
	{
		printf("list is empty\n");
		return;
	}
	Node* H = &head;
	Node* delnode = H->next;

	H->next = delnode->next;
	free(delnode);
}


int main()
{	
	print_node();

	push_front("podal");
	print_node();

	push_rear("sam");
	push_rear("sora");
	print_node();

	push_front("dad");
	print_node();
	
	push_after("podal", "new");
	print_node();

	return 0;
}