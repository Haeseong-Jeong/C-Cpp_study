#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 10

int max = size;
int* arr;
int top;

void init_arr() {
    arr = (int*)malloc(sizeof(int) * max);
    top = -1;
}

bool isempty() {
    if (top == -1) {
        return true;
    }
    return false;
}

bool isfull() {
    if (top == max - 1) {
        return true;
    }
    return false;
}

void reallocate() {
    max = max * 2;
    int* tmp = (int*)realloc(arr, max);
    if (tmp != NULL) {
        arr = tmp;
    }
}

void push(int num) {
    if (isfull() == true) {
        reallocate();
    }
    arr[++top] = num;
}

int pop() {
    top--;
    int popdata = arr[top];
    return popdata;
}

void calculate(char* op) {
    int num1 = pop();
    int num2 = pop();
    int result = 0;

    if ((strcmp(op, "+") == 0)) {
        result = num2 + num1;
        push(result);
    }

    else if ((strcmp(op, "-") == 0)) {
        result = num2 - num1;
        push(result);
    }

    else if ((strcmp(op, "*") == 0)) {
        result = num2 * num1;
        push(result);
    }

    else if ((strcmp(op, "/") == 0)) {
        result = num2 / num1;
        push(result);
    }
}

int MathChallenge(char* str) {

    char* ptr = strtok(str, " ");
    printf("first ptr = %s\n", ptr);

    while (ptr != NULL) {
        if ((strcmp(ptr, "+") == 0) || (strcmp(ptr, "-") == 0) || (strcmp(ptr, "*") == 0) || (strcmp(ptr, "/") == 0)) {
            printf("ptr = %s\n", ptr);
            calculate(ptr);
        }
        else {
            push(atoi(ptr));
        }
        ptr = strtok(NULL, " ");
    }
    // code goes here  
    printf("%s", str);
    printf("answer = %d\n", arr[0]);
    return arr[0];
}

int main() {
    printf("dsgasdg");
    init_arr();
    // keep this function call here
    //MathChallenge(coderbyteInternalStdinFunction(stdin));
    //MathChallenge("1 1 + 1 + 1 +");
    free(arr);
    return 0;
}