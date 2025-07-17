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
    printf("Element of LinkedList are : \n");

    PNODE temp = NULL;

    temp = head;

    while(temp != NULL)
    {
        printf("|%d|->",temp -> data);
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

int main()
{
    PNODE first = NULL;

    return 0;
}