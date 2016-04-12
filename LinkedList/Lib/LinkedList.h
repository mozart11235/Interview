struct node
{
    int a;
    node* next;
}s1;

node* base = NULL;

void displayLinkedListMenu()
{
    printf("\n Press 1 to add a new Node");
    printf("\n Press 2 to display the linked list");
    printf("\n Press 3 to Exit");
}

void addNode()
{
    int n = 0;
    node* curr = NULL;

    printf("\n Enter node element: ");
    scanf("%d", &n);

    if(base == NULL)
    {
        base = new node;
        curr = base;
        curr->next = NULL;
    }
    else
    {
        curr = new node;
        curr->next = base;
        base = curr;
    }
    curr->a = n;
}

void displayList()
{
    node* curr = base;
    printf("\n The list looks like: ");
    while(curr != NULL)
    {
        printf("%d->", curr->a);
        curr = curr->next;
    }
    printf("NULL");
}

void builddefaultLinkedList()
{
    base = new node;
    base->next = NULL;
    base->a=6;

    node* curr;

    for (int i = 0 ; i < 5; i++)
    {
        curr = new node;
        curr->next = base;
        base = curr;
        curr->a = 5-i;
    }
}

