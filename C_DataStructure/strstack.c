#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max 10

typedef struct _stack
{
	char* strdata;
	//int* intdata;
	int top;
}stack;

void init_stack(stack* s)
{
	s->strdata = (char*)malloc(sizeof(char) * max);
	//s->intdata = (int*)malloc(sizeof(int) * max);
	memset(s->strdata, NULL, sizeof(char)*max);
	s->top = -1;
}

int isfull(stack* s)
{
	if (s->top == max-1)
	{
		printf("stack is full\n");
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty(stack* s)
{
	if (s->top == - 1)
	{
		printf("stack is empty\n");
		return 1;
	}
	else
	{
		return 0;
	}
}


void push(int data)
{
	if (isfull()
	{

	}
}
int main()
{
	stack** strstack = (stack**)malloc(sizeof(stack*) * max);


	return 0;
}