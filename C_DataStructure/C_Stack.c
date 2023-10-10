#include <stdio.h>
#include <stdbool.h>
#define Max 10

bool IsFull();
bool IsEmpty();
void push(int data);
int pop();

int stack[Max];
int top = -1;

bool IsFull()
{
    if (top == Max - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool IsEmpty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void push(int data)
{
    if (IsFull() == true)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top += 1;
        stack[top] = data;
    }
}

int pop()
{
    if (IsEmpty() == true)
    {
        printf("Stack is Empty\n");
        return 0;
    }
    else
    {
        int popdata = stack[top];
        stack[top] = 0;
        top -= 1;
        return popdata;
    }
}

void PrintStack()
{
    if (IsEmpty() == true)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        int i = 0;
        for (i = 0; i <= Max; i++)
        {
            printf("Stack[%d] ¿ä¼Ò : %d \n", i, stack[i]);
        }
    }
}


int main()
{
    pop();
    push(20);
    push(10);
    push(25);
    PrintStack();

    printf("==========================================\n");
    printf("Pop Data : %d \n",pop());
    PrintStack();
    push(2);
    push(1);
    
    return 0;
}