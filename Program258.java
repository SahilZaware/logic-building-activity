import java.util.* ; 

class ArrayX
{
    public int Arr[] ;

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        int i = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int i = 0 ; 

        System.out.println("Elements in the array are : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class Program258
{
    public static void main(String[] args)
    {
        int iLength = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();
    }
}