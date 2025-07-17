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

int SearchFirstOcc(PNODE head , int no)
{
    PNODE temp = NULL;

    temp = head;

    int position = 1;

    while(temp != NULL)
    {
        if(temp -> data == no)
        {
            return position;
        }
        temp = temp -> next;
        position++;
    }
    return -1;
}

int main()
{
    PNODE first = NULL;

    int iRet = 0;

    InsertFirst(&first,111);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    iRet = SearchFirstOcc(first,51);
    printf("Position of element is : %d\n",iRet);

    iRet = SearchFirstOcc(first,11);
    printf("Position of element is : %d\n",iRet);

    iRet = SearchFirstOcc(first,111);
    printf("Position of element is : %d\n",iRet);

    return 0;
}