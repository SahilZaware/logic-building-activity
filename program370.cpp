#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    public:
        PNODE head;
        PNODE tail;
        int iCount;

        DoublyCL()
        {
            head = NULL;
            tail = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if((head == NULL) && (tail == NULL))
            {
                head = newn ;
                tail = newn;
            }
            else
            {
                newn -> next = head;
                head -> prev = newn;
                head = newn;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount++;
        }
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn -> data = no;
            newn -> next = NULL;

            if((head == NULL) && (tail == NULL))
            {
                head = newn;
                tail = newn;
            }
            else
            {
                tail -> next = newn;
                newn -> prev = tail;
                tail = newn;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount++;
        }
        void InsertAtPos(int no, int ipos)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            int CountNode = 0;
            int i = 0;
            CountNode = Count();

            newn = new NODE;
            newn -> data = no;
            newn -> next = NULL;

            if((ipos < 1) || (ipos > CountNode + 2))
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
                newn -> next -> prev = newn;
                temp -> next = newn;
                newn -> prev = temp;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount++;
        }
        
        void DeleteFirst()
        {
            PNODE temp = NULL;
            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            else if(head == tail)
            {
                delete(head);
                head = NULL;
                tail = NULL;
            }
            else
            {
                temp = head;
                
                head = head -> next;
                free(temp);
            }
            tail -> next = head;
            head -> prev = tail;
            iCount--;
        }
        void DeleteLast()
        {
            PNODE temp = NULL;

            if((head == NULL) && (tail == NULL))
            {
                return;
            }
            else if(head == tail)
            {
                delete(head);
                head = NULL;
                tail = NULL;
            }
            else
            {
                temp = head;

                while(temp -> next != tail)
                {
                    temp = temp -> next;
                }
                delete(temp -> next);
                tail = temp;
            }
            tail -> next = head;
            head -> prev = tail;
            iCount--;
        }
        void DeleteAtPos(int ipos)
        {
            PNODE temp = NULL;
            PNODE target = NULL;

            int i = 0;

            int CountNode = 0;
            CountNode = Count();

            if(ipos < 1 || ipos > CountNode + 2)
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
                temp = head;

                for(i = 1; i < ipos - 1; i++)
                {
                    temp = temp -> next;
                }

                target = temp -> next;
                temp -> next = target -> next;
                temp -> next -> prev = temp;
                delete(target);
            }
            tail -> next = head;
            head -> prev = tail;
            iCount--;
        }

        void Display()
        {
            if((head == NULL) && (tail == NULL))
            {
                cout<<"LinkedList is empty...\n";
                return;
            }
            cout<<"Elements of LinkedList are : \n";
            do
            {
                cout<<"|"<<head -> data<<"|<=>";
                head = head -> next;
            }while(head != tail -> next);

            cout<<"\n";
        }
        int Count()
        {
            return iCount;
        }
};

int main()
{
    DoublyCL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(151);

    dobj.InsertAtPos(75,4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are : "<<iRet<<"\n";

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are : "<<iRet<<"\n";

    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are : "<<iRet<<"\n";

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of elements in LinkedList are : "<<iRet<<"\n";

    return 0;
}