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
}

class Program505
{
    public static void main(String args[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.InsertFirst(11);
        sobj.InsertFirst(21);
        sobj.InsertFirst(51);
    }
}