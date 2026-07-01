#include <stdio.h>
#include <string.h>

char stack[1000];
int top = -1;
int maxDepth = 0;

int push(char val)
{
    if(top == 999)
    {
        printf("Stack Overflow\n");
        return top + 1;
    }

    stack[++top] = val;
    return top + 1;
}

char pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
        return ' ';
    }

    return stack[top--];
}

int isEmpty()
{
    return top == -1;
}

int isBalanced(char str[])
{
    int i;
    
    for(i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if(ch == '(' || ch == '{' || ch == '[')
        {
            int depth = push(ch);
         
            if(depth > maxDepth)
                maxDepth = depth;
        }
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            if(isEmpty())
                return 0;

            char t = pop();

            if((ch == ')' && t != '(') ||
               (ch == '}' && t != '{') ||
               (ch == ']' && t != '['))
            {
                return 0;
            }
        }
    }

    return isEmpty();
}

int main()
{
    char input[] = "Simple {{{()}}} test ((((())))) ((())).";

    if(isBalanced(input))
        printf("Balanced\nMax Depth: %d\n", maxDepth);
    else
        printf("Not Balanced\n");
    return 0;
}