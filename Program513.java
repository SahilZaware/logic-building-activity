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

class Queue
{
    public int iCount;
    public node head;

    public Queue()
    {
        this.iCount = 0;
        this.head = null;
    }

    public void Enqueue(int no)
    {
        node newn = null;

        newn = new node(no);

        if(head == null)
        {
            head = newn;
        }
        else
        {
            node temp = null;
            temp = head;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public int Dequeue()
    {
        int no = 0;

        if(head == null)
        {
            System.out.println("Queue is empty...!");
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
        node temp = null;
        temp = head;

        System.out.println("Elements in Queue are : ");

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

class  Program513
{
    public static void main(String[] args)
    {
        Queue qobj = new Queue();

        int iRet = 0;

        qobj.Enqueue(11);
        qobj.Enqueue(21);
        qobj.Enqueue(51);
        qobj.Enqueue(71);
        qobj.Enqueue(101);
        qobj.Enqueue(111);
        qobj.Enqueue(121);

        qobj.Display();
        iRet = qobj.Count();
        System.out.println("Number of elements inside queue are : "+iRet);

        iRet = qobj.Dequeue();
        System.out.println("Dequeued element is : "+iRet);

        iRet = qobj.Dequeue();
        System.out.println("Dequeued element is : "+iRet);

        qobj.Display();
        iRet = qobj.Count();
        System.out.println("Number of elements inside queue are : "+iRet);
    }
}