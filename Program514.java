class node
{
    public int data;
    public node next;
    public node prev;

    public node(int x)
    {
        this.data = x;
        this.next = null;
        this.prev = null;
    }
}
class DoublyCL
{
    public node head;
    public node tail;
    public int iCount;

    public DoublyCL()
    {
        this.head = null;
        this.tail = null;
        this.iCount = 0;
    }
}

class Program514
{
    public static void main(String[] args)
    {
        DoublyCL dobj = new DoublyCL();
    }
}