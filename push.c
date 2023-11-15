#include "monty.h"

void push(int data)
{
    if(top == MAX - 1)
    {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    top = top + 1
    stack_arr[top] = data;
}
