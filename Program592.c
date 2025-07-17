#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");

    PNODE temp = NULL;

    temp = head;

    while(temp != NULL)
    {
        printf("|%d|->",temp -> data);
        temp = temp -> next;
    }
    printf("|NULL|\n");
}

int Count(PNODE head)
{
    PNODE temp = NULL;

    temp = head;

    int iCount = 0;

    while(temp != NULL)
    {
        iCount++;
        temp = temp -> next;
    }
    return iCount;
}

void MiddleElement(PNODE head)
{
    PNODE temp = NULL;

    temp = head;

    int iCount = 0;
    int i = 0;

    while(temp != NULL)
    {
        iCount++;
        temp = temp -> next;
    }

    temp = head;

    for(i = 1; i <= iCount/2; i++)
    {
        temp = temp -> next;
    }

    printf("Middle element is : %d",temp -> data);
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,121);
    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    
    iRet = Count(first);
    printf("The count of all elements are : %d\n",iRet);

    MiddleElement(first);

    return 0;
}