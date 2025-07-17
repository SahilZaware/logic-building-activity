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

void InsertAtPos(PPNODE head, PPNODE tail, int no, int ipos)
{
    int CountNode = 0;
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    CountNode = Count(*head,*tail);
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((ipos < 1) && (ipos > CountNode + 2))
    {
        printf("Invalid Position...\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head,tail,no);
    }
    else if(ipos == CountNode)
    {
        InsertLast(head,tail,no);
    }
    else
    {
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

void DeleteFirst(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *head = (*head) -> next;
        free((*tail) -> next);

        (*tail) -> next = *head;
        (*head) -> prev = *tail;
    }

}

void DeleteLast(PPNODE head, PPNODE tail)
{
    if((*head == NULL) && (*tail == NULL))
    {
        return;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        *tail = (*tail) -> prev;
        free((*tail) -> next);
    }
    (*tail) -> next = *head;
    (*head) -> prev = *tail;
}

void DeleteAtPos(PPNODE head, PPNODE tail, int ipos)
{
    int CountNode = 0;
    int i = 0;
    PNODE temp = NULL;
    PNODE target = NULL;

    CountNode = Count(*head,*tail);

    if((ipos < 1) || (ipos > CountNode + 2))
    {
        printf("Invalid position...");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(head,tail);
    }
    else if(ipos == CountNode + 1)
    {
        DeleteLast(head,tail);
    }
    else
    {
        temp = *head;

        for(i = 1 ; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;
        temp -> next = target -> next;
        temp -> next -> prev = temp;
        free(target);
    }
}

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
    int iCnt = 0;
    if((head == NULL) && (tail == NULL))
    {
        return 0;
    } 
    do
    {
        iCnt++;
        head = head -> next;
    }while(head != tail -> next);

    return iCnt;
}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);

    InsertLast(&first,&last,101);
    InsertLast(&first,&last,121);
    InsertLast(&first,&last,151);

    Display(first,last);
    iRet = Count(first,last);
    printf("Number of elements in LinkedList are : %d\n",iRet);

    InsertAtPos(&first,&last,75,4);
    Display(first,last);
    iRet = Count(first,last);
    printf("Number of elements in LinkedList are : %d\n",iRet);

    DeleteAtPos(&first,&last,2);
    Display(first,last);
    iRet = Count(first,last);
    printf("Number of elements in LinkedList are : %d\n",iRet);

    DeleteFirst(&first,&last);
    Display(first,last);
    iRet = Count(first,last);
    printf("Number of elements in LinkedList are : %d\n",iRet);

    DeleteLast(&first,&last);
    Display(first,last);
    iRet = Count(first,last);
    printf("Number of elements in LinkedList are : %d\n",iRet);

    return 0;
} 
