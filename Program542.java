import java.util.*;

class Program542
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
        System.out.println();

        lobj.removeFirst();
        lobj.removeLast();

        for(Integer no : lobj)
        {
            System.out.println(no);
        }

        lobj.clear();

        System.out.println();
        System.out.println(lobj);
    }
}