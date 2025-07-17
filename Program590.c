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

void InsertLast(PPNODE head , int no)
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
        PNODE temp = NULL;
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
        newn -> next = NULL;
    }
}

void Display(PNODE head)
{
    PNODE temp = NULL;
    temp = head;

    printf("Elements of LinkedList are : \n");

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

void DeleteFirst(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        (*head) -> next = NULL;
    }
    else
    {
        temp = *head;
        
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head) -> next == NULL)
    {
        free(*head);
        (*head) -> next = NULL;
    }
    else
    {
        temp = *head;

        while(temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE head , int no , int ipos)
{
    int CountNode = 0;

    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = no;
    newn -> next = NULL;

    if((ipos < 1) || (ipos > CountNode + 1))
    {
        printf("Invalid Position....\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(head,no);
    }
    else if(ipos == CountNode + 1)
    {
        InsertLast(head , no);
    }
    else
    {
        PNODE temp = NULL;

        temp = *head;

        int i = 0;

        for(i = 0; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

void DeleteAtPos(PPNODE head ,  int ipos)
{
    int CountNode = 0;

    if(*head == NULL)
    {
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(head);
    }
    else if(ipos == CountNode)
    {
        DeleteLast(head);
    }
    else
    {
        PNODE temp = NULL;
        PNODE target = NULL;

        int i = 0;

        temp = *head;

        for(i = 0; i < ipos - 1; i++)
        {
            temp = temp -> next;
        }        

        target = temp -> next;
        temp -> next = target -> next;
        free(target);
    }
}

int main()
{
    PNODE first = NULL;

    int iOption = 0;
    int iRet = 0 , iValue = 0 , ipos = 0;

    while(1)
    {
        printf("_____________________________________________________________\n");

        printf("1 : Insert new element at first position.\n");
        printf("2 : Insert new element at last position.\n");
        printf("3 : Insert new element at given position.\n");
        printf("4 : Delete the element from the first position.\n");
        printf("5 : Delete the last element from last position.\n");
        printf("6 : Delete the element from the given position.\n");
        printf("7 : Display the elements.\n");
        printf("8 : Count the elements.\n");
        printf("9 : Terminate the application.\n");

        printf("_____________________________________________________________\n");

        printf("Please select the targeted operation : \n");
        scanf("%d",&iOption);

        printf("_____________________________________________________________\n");

        if(iOption == 1)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertFirst(&first , iValue);
            printf("Element inserted successfully.\n");
        }
        else if(iOption == 2)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            InsertLast(&first , iValue);
            printf("Element inserted successfully.\n");
        }
        else if(iOption == 3)
        {
            printf("Enter the element : \n");
            scanf("%d",&iValue);

            printf("Enter the position.\n");
            scanf("%d",&ipos);

            InsertAtPos(&first , iValue , ipos);
            printf("Record inserted successfully.\n");
        }
        else if(iOption == 4)
        {
            DeleteFirst(&first);

            printf("Element deleted successfully.\n");
        }
        else if(iOption == 5)
        {
            DeleteLast(&first);

            printf("Element deleted successfully.\n");
        }
        else if(iOption == 6)
        {
            printf("Enter the position.\n");
            scanf("%d",&ipos);

            DeleteAtPos(&first,ipos);

            printf("Element deleted successfully.\n");
        }
        else if(iOption == 7)
        {
            printf("All the elements of LinkedList are : \n");

            Display(first);
        }
        else if(iOption == 8)
        {
            iRet = Count(first);
            printf("Count of all elements are : %d",iRet);
        }
        else if(iOption == 9)
        {
            printf("Thank you for using the Application.\n");
            break;
        }
        else
        {
            printf("Invalid option.\n");
        }
    }

    return 0;
}
