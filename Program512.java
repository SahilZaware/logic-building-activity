class node
{
    public int data;
    public node next;

    public node(int x)
    {
        this.data = x;
        this.next = null;
    }
}

class Stack
{
    public node head;
    public int iCount;

    public Stack()
    {
        this.head = null;
        this.iCount = 0;
    }

    public void Push(int no)
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

    public int Pop()
    {
        int no = 0;

        if(head == null)
        {
            System.out.println("Stack is empty...!");
            return -1;
        }
        else if(head.next == null)
        {
            no = head.data;
            head = null;
            System.gc();
        }
        else
        {
            no = head.data;
            head = head.next;
            System.gc();
        }
        iCount--;

        return no;
    }

    public void Display()
    {
        System.out.println("Elements of stack are : ");
        node temp = null;
        temp = head;

        while(temp != null)
        {
            System.out.println("|"+temp.data+"|");
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }
}

class Program512
{
    public static void main(String[] args)
    {
        Stack sobj = new Stack();

        int iRet = 0;

        sobj.Push(101);
        sobj.Push(51);
        sobj.Push(21);
        sobj.Push(11);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Elements in stack are : "+iRet);

        iRet = sobj.Pop();
        System.out.println("Popped element is : "+iRet);
        
        iRet = sobj.Pop();
        System.out.println("Popped element is : "+iRet);

        iRet = sobj.Pop();
        System.out.println("Popped element is : "+iRet);

        iRet = sobj.Pop();
        System.out.println("Popped element is : "+iRet);

        iRet = sobj.Pop();
        System.out.println("Popped element is : "+iRet);

        sobj.Display();
        iRet = sobj.Count();
        System.out.println("Number of Elements in stack are : "+iRet);
    }
}