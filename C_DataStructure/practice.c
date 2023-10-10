#include <stdio.h>
#include <stdlib.h>
#define max 10
typedef struct _stack
{
	char** strstack;
	int top;
}stack;

void init_stack(stack* s)
{
	s->top = -1;
	s->strstack = (char**)malloc(sizeof(char*) * max);
}


int isfull(stack* s)
{
	if (s->top == max-1)
	{
		return 1;
	}
	return 0;
}

int isempty(stack* s)
{
	if (s->top == -1)
	{
		return 1;
	}
	return 0;
}


void push(stack* s,char* str)
{
	if (isfull(s) == 1)
	{
		printf("stack is full\n");
	}
	else
	{
		s->top++;
		s->strstack[s->top] = str;
	}
}

char* pop(stack* s)
{
	if (isempty(s) == 1)
	{
		printf("stack is empty\n");
	}
	else
	{
		char* popdata =	s->strstack[s->top];
		s->top--;
		return popdata;
	}
}

void print_stack(stack* s)
{
	for (int i = 0; i <= s->top; i++)
	{
		printf("Stack[%d] = %s\n", i, s->strstack[i]);
	}
}

int main()
{
	stack s1;
	init_stack(&s1);


	push(&s1, "name");
	push(&s1, "fror");
	print_stack(&s1);

	return 0;
}