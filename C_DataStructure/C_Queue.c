#include <stdio.h>
#include <stdbool.h>
#define Max 10

bool IsFull();
bool IsEmpty();
void Reset();
void push(int data);
int pop();

int Queue[Max];
int front = 0;
int rear = -1;

bool IsFull()
{
    if (rear == Max - 1)
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
    if (front -1 == rear)
    {
        if (front != 0)
        {
            Reset();
            return true;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

void Reset()
{
    front = 0;
    rear = -1;
}

void push(int data)
{
    if (IsFull() == true)
    {
        printf("Queue is Full\n");
    }
    else
    {
        rear += 1;
        Queue[rear] = data;
    }
}

int pop()
{
    if (IsEmpty() == true)
    {
        printf("Queue is Empty\n");
        return 0;
    }
    else
    {
        int popdata = Queue[front];
        Queue[front] = 0;
        front += 1;
        return popdata;
    }
}

void PrintQueue()
{
    if (IsEmpty() == true)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        int i = 0;
        for (i = 0; i <= Max; i++)
        {
            printf("Queue[%d] ¿ä¼Ò : %d \n", i, Queue[i]);
        }
    }
}


int main()
{
    pop();
    push(20);
    push(10);
    push(25);
    PrintQueue();

    printf("==========================================\n");
    printf("Pop Data : %d \n", pop()); //20
    PrintQueue();
    
    printf("==========================================\n");
    printf("Pop Data : %d \n", pop()); //10
    PrintQueue();
    printf("==========================================\n");
    printf("Pop Data : %d \n", pop()); //25
    PrintQueue();
    printf("==========================================\n");
    printf("Pop Data : %d \n", pop());
    PrintQueue();

    printf("==========================================\n");
    printf("Pop Data : %d \n", pop());
    PrintQueue();

    

    return 0;
}