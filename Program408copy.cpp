#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn -> data = no;
            newn -> next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn -> next = head;
                head = newn;
            }
            iCount++;
        }

        void InsertLast(int no)
        {
            PNODE temp = NULL;
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp -> next = newn;
            }
            iCount++;
        }

        void InsertAtPos(int no , int ipos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;
            int i = 0;
            int CountNode = 0;
            CountNode = Count();
            newn = new NODE;

            newn -> data = no;
            newn -> next = NULL;

            if((ipos < 1 ) || (ipos > CountNode + 1))
            {
                cout<<"Invalid position...\n";
                return;
            } 

            if(ipos == 1)
            {
                InsertFirst(no);
            }
            else if(ipos == CountNode)
            {
                InsertLast(no);
            }
            else
            {
                temp = head;

                for(i = 1; i < ipos - 1; i++)
                {
                    temp = temp -> next;
                }
                newn -> next = temp -> next;
                temp -> next = newn;
            }
            iCount++;
        }

        void DeleteFirst()
        {
            PNODE temp = NULL;
            if(head == NULL)
            {
                cout<<"Linked List is empty";
                return ;
            }
            else if(head -> next == NULL)
            {
                delete head;
                head = NULL;                
            }
            else 
            {
                temp = head;

                head = head -> next;
                delete(temp);
            }
            iCount--;
        }

        void DeleteLast()
        {
            PNODE temp = NULL;
            if(head == NULL)
            {
                cout<<"Linked List is empty\n";
                return;
            }
            else if(head -> next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;
                while(temp -> next -> next != NULL)
                {
                    temp = temp -> next;
                }
                delete (temp -> next);
                temp -> next = NULL;
            }
            iCount--;
        }

        void DeleteAtPos(int ipos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            int i = 0;
            int CountNode = 0;
            CountNode = Count();

            if((ipos < 1) || (ipos > CountNode))
            {
                cout<<"Invalid position...\n";
                return;
            }
            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == CountNode)
            {
                DeleteLast();
            }
            else
            {
                temp = head ;

                for(i = 1 ; i < ipos - 1; i++)
                {
                    temp = temp -> next;
                }
                target = temp -> next;
                temp -> next = target -> next;
                delete(target);
            }
            iCount--;
        }

        void Display()
        {
            PNODE temp = NULL;
            temp = head;
            cout<<"Elements of LinkedList are : \n";
            if(temp == NULL)
            {
                cout<<"Linked List is empty...\n";
            }
            else
            {
                while(temp != NULL)
                {
                    cout<<" | "<<temp -> data<<" |->";
                    temp = temp -> next;
                }
            }
            cout<<"NULL\n";
        }

        int Count()
        {

            return iCount;
        }
};

int main()
{
    SinglyLL sobj;
    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.InsertAtPos(75,4);

    sobj.Display();

    iRet = sobj.Count();
    cout<<"Number of nodes in LinkedList are : "<<iRet<<"\n";

    /*sobj.DeleteFirst();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes in LinkedList are : "<<iRet<<"\n";*/

    /*sobj.DeleteLast();
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes in LinkedList are : "<<iRet<<"\n";*/

    sobj.DeleteAtPos(4);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of nodes in LinkedList are : "<<iRet<<"\n";

    return 0;
}