class node
{
    public int data;
    public node next;

    public node(int x)
    {
        data = x;
        next = null;
    }
}

class SinglyLL
{
    public node head;
    public int iCount;

    public SinglyLL()
    {
        this.head = null;
        this.iCount = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            newn.next = head;
            head = newn;
        }
        iCount++;
    }

    public void InsertLast(int no)
    {
        node newn = null;
        node temp = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void InsertAtPos(int no, int ipos)
    {
        node temp = null;

        node newn = null;

        newn = new node(no);

        if(ipos < 1 || ipos > iCount + 1)
        {
            System.out.println("Invalid position...!");
            return;
        }
        
        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == iCount + 1)
        {
            InsertLast(no);
        }
        else
        {
            temp = head;

            int i = 0;

            for(i = 1; i < ipos - 1; i++)
            {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;
        }
        iCount++;
    }

    public void DeleteFirst()
    {
        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            head = head.next;
            System.gc();
        }
        iCount--;
    }

    public void DeleteLast()
    {
        node temp = null;

        if(head == null)
        {
            return;
        }
        else if(head.next == null)
        {
            head = null;
            System.gc();
        }
        else
        {
            temp = head;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;
            System.gc();
        }
        iCount--;
    }

    public void DeleteAtPos(int ipos)
    {
        node temp = null;

        if(ipos < 1 || ipos > iCount)
        {
            System.out.println("Invalid position...!");
            return;
        }

        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == iCount)
        {
            DeleteLast();
        }
        else
        {
            temp = head;

            int i = 0;

            for(i = 1; i < ipos - 1; i++)
            {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            System.gc();
        }
        iCount--;
    }

    public void Display()
    {
        System.out.println("Elements of Linked List are : ");

        node temp = null;

        temp = head;

        while(temp != null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("|null|");
    }

    public int Count()
    {
        return iCount;
    }
}

class Program511
{
    public static void main(String[] args)
    {
        SinglyLL sobj = new SinglyLL();
        
        int iRet = 0;

        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertLast(101);
        sobj.InsertLast(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes in Linked List are : "+iRet);

        sobj.InsertAtPos(777,4);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes in Linked List are : "+iRet);

        sobj.DeleteAtPos(2);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes in Linked List are : "+iRet);

    }
}