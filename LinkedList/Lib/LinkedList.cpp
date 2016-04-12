#include <stdio.h>
#include "LinkedList.h"

int main()
{
    int ch;
top:
    displayLinkedListMenu();
    scanf("%d", &ch);
    if(ch == 1)
    {
        addNode();
        goto top;
    }
    else if (ch==2)
    {
        displayList();
        goto top;
    }
    else if(ch == 3)
    {
    }
    return 0;
}
