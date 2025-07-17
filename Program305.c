#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL ;  // new node created

    newn = (PNODE)malloc(sizeof(NODE)); // Dynamically memory allocated

    // Initialise the members
    newn -> data = no;
    newn -> next = NULL ;

    if(*head == NULL )    // (LL is empty)
    {
        *head = newn ;
    }
    else      // case 2 (LL contains atleast 1 node)
    {
        newn -> next = *head;
        *head = newn ;
    }
}

int main()
{
    PNODE first = NULL ;

    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    return 0;
}