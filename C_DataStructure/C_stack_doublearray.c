#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define max 10

typedef struct _Stack
{
	char stack[max];
	int top = -1;
} stack;


void isfull()
{
	if (top == max -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void isempty()
{
	if (top == - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void push()
{
	if (isfull == true)
	{
		printf("Stack is full\n");
	}
	else
	{

	}
}
