#include "monty.h"

void pall()
{
    int val;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    for (val = top; val >= 0; val--)
    {
        printf("%d\n", stack_arr[val]);
        printf("\n");
    }
}