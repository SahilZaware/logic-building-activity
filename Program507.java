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

class Program507
{
    public static void main(String[] args)
    {
        SinglyLL sobj = new SinglyLL();
        
        int iRet = 0;

        sobj.InsertFirst(11);
        sobj.InsertFirst(21);
        sobj.InsertFirst(51);

        sobj.InsertLast(101);
        sobj.InsertFirst(111);
        sobj.InsertLast(121);

        sobj.Display();

        iRet = sobj.Count();
        System.out.println("Number of nodes in Linked List are : "+iRet);

    }
}