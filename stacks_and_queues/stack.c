#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }

    top++;
    stack[top] = value;
    printf("%d pushed\n", value);
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }

    printf("%d popped\n", stack[top]);
    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
        return;
    }

    printf("Top Element = %d\n", stack[top]);
}

void display()
{
    if(top == -1)
    {
        printf("Stack Empty\n");
        return;
    }

    printf("Stack:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    peek();

    pop();

    display();

    return 0;
}