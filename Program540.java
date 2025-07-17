import java.util.*;

class Program540
{
    public static void main(String[] args)
    {
        LinkedList <Integer>lobj = new LinkedList<Integer>();

        lobj.addFirst(51);
        lobj.addFirst(21);
        lobj.addFirst(11);

        lobj.addLast(101);
        lobj.addLast(121);
        lobj.addLast(151);

        lobj.add(3,75);

        System.out.println(lobj);

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        boolean bRet = lobj.contains(75);

        if(bRet == true)
        {
            System.out.println("Element is present...");
        }
        else
        {
            System.out.println("There is no such element...");
        }

        System.out.println(lobj);
    }
}