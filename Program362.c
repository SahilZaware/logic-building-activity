#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE head, PPNODE tail, int no)
{ 
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn -> data = no;
   newn -> next = NULL;
   newn -> prev = NULL;

   if((*head == NULL) && (*tail == NULL))
   {
        *head = newn;
        *tail = newn;
   }
   else
   {
        newn -> next = *head;
        (*head) -> prev = newn;
        *head = newn;
   }
    (*tail) -> next = *head;
    (*head) -> prev = *tail;
}

void InsertLast(PPNODE head, PPNODE tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*head) == NULL && (*tail) == NULL)
    {
        *head = newn;
        *tail = newn;
    }
    else
    {
        (*tail) -> next = newn;
        newn -> prev = *tail ; 
        *tail = newn;
    }
    (*tail) -> next = *head;
    (*head) -> prev = *tail;

}

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos){}

void DeleteFirst(PPNODE head, PPNODE tail){}
void DeleteLast(PPNODE head, PPNODE tail){}
void DeleteAtPos(PPNODE head, PPNODE tail, int ipos){}

void Display(PNODE head, PNODE tail)
{
    if((head == NULL) && (tail == NULL))
    {
        printf("LinkedList is empty...\n");
        return;
    }
    printf("Elements of LinkedList are : \n");
    do
    {
        printf("| %d |<=>",head -> data);
        head = head -> next;
    } while (head != tail -> next);

    printf("\n");
    
}

int Count(PNODE head, PNODE tail)
{

}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;

    InsertFirst(&first,&last,11);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,51);

    InsertFirst(&first,&last,101);
    InsertFirst(&first,&last,121);
    InsertFirst(&first,&last,151);

    return 0;
}