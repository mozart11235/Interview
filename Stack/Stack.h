#include <stdio.h>

#define MAX_STACK 100

class stack
{
    int a[MAX_STACK];
    int top;

    public:
    stack()
    {
        top = -1;
    }
    void display()
    {
        printf("\nStack Menu\n");
        printf("\nPress 1 for Push\n");
        printf("\nPress 2 for Pop\n");
        printf("\nPress 3 to view stack Top\n");
        printf("\nPress 4 to Exit\n");
    }
    void push( int n)
    {
        top++;

        if(top<MAX_STACK)
        {
            a[top] = n;
        }
    }
    void pop()
    {
        if(top > -1)
        {
            a[top] = -1;
            top--;
        }
    }
    void showtop()
    {
        if(top > -1)
            printf("\t\t\t Stack top = %d \t\t\t", a[top]);
        else
            printf("Stack is empty");
    }
};

