#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertAtFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        (*head) -> prev = newn;
        *head = newn;
    }
}

void InsertAtLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void InsertAtPos(PPNODE head, int no , int ipos)
{
    int CountNode = 0;
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head);

    if(ipos < 1 || ipos > CountNode + 1)
    {
        printf("Invalid Position...\n");
    }

    if(ipos == 1)
    {
        InsertAtFirst(head,no);
    }
    else if(ipos == CountNode + 1)
    {
        InsertAtLast(head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn -> data = no;
        newn -> next = NULL;
        newn -> prev = NULL;
        
        temp = *head;

        for(i = 1 ; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next -> prev = newn;
        temp -> next = newn;
        newn -> prev = temp;
    }
}

void DeleteAtFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        *head = NULL;
    }
    else
    {
        (*head) = (*head) -> next;
        free((*head) -> prev);
        (*head) -> prev = NULL;
    }


}

void DeleteAtLast()
{}

void DeleteAtPos()
{}

void Display(PNODE head)
{
    printf("Elements of LinkedList are : \n");
    while(head != NULL)
    {
        printf("| %d |<=>",head -> data);
        head = head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;
    while(head != NULL)
    {
        iCount++;
        head = head -> next;
    }
    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertAtFirst(&first,51);
    InsertAtFirst(&first,21);
    InsertAtFirst(&first,11);

    InsertAtLast(&first,101);
    InsertAtLast(&first,111);
    InsertAtLast(&first,121);

    InsertAtPos(&first,75,4);

    DeleteAtFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes in LinkedList are : %d",iRet);

    return 0;
}