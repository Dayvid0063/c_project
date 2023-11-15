#include "monty.h"

int pop()
{
    int val;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    val = stack_arr[top];
    top = top - 1;
    return val;
}