#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void Enqueue(PPNODE head, int no)   // DeleteLast
{
    PNODE temp = NULL;
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
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
        newn -> next = NULL;
    }
}

int Dequeue(PPNODE head)
{
    PNODE temp = NULL;
    int no = -1;
    if(*head == NULL)
    {
        printf("Queue is empty....\n");
    }
    else if((*head) -> next == NULL)
    {
        no = (*head) -> data;
        free(*head);
        *head = NULL;
    }
    else
    {
        temp = *head;
        no = (*head) -> data;
        *head = (*head) -> next;
        free(temp);
    }
    return no;
}

void Display(PNODE head)
{
    printf("Elements of queue are : \n");

    while(head != NULL)
    {
        printf("| %d |\n",head -> data);
        head = head -> next;
    }
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
    printf("\n");
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    Enqueue(&first,101);
    Enqueue(&first,51);
    Enqueue(&first,21);
    Enqueue(&first,11);
    Enqueue(&first,12);

    Display(first);
    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    Dequeue(&first);
    iRet = Dequeue(&first);
    printf("Dequeued element is : %d\n",iRet);

    Display(first);
    iRet = Count(first);
    printf("Number of elements are : %d\n",iRet);

    return 0;
}