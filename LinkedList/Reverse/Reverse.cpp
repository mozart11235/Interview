#include <stdio.h>
#include "../Lib/LinkedList.h"

void reverse()
{
    node *curr, *back , *fwd;
    curr=base;
    back = NULL;
    while(curr!=NULL)
    {
        base = curr;
        fwd = curr -> next;
        curr->next = back;
        back = curr;
        curr = fwd;
    }
}

int main()
{
    int ch;
    builddefaultLinkedList();
top:
    displayLinkedListMenu();
    printf("\n Press 4 to reverse Linked List");
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
        return 0;
    }
    else if(ch == 4)
    {
        reverse();
        goto top;
    }
    return 0;
}
