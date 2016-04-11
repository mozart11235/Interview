#include "Stack.h"

int main()
{
    int ch;
    stack s1;
start:
    s1.display();
    scanf("%d",&ch);
    if(ch == 1)
    {
        int n;
        printf("\nEnter the element to be pushed:");
        scanf("%d",&n);
        s1.push(n);
        goto start;
    }
    else if(ch ==2)
    {
        s1.pop();
        goto start;
    }
    else if(ch==3)
    {
        s1.showtop();
        goto start;
    }
    else if(ch==4)
    {
        return 0;
    }
    else
    {
        printf("\nInvalid Input\n");

    }
    return 0;
}

