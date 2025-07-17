import java.util.* ; 

class ArrayX
{
    public int Arr[] ;
    public ArrayX(int iSize)
    {
        Arr = new int[iSize] ;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0 ;

        System.out.println("Enter the elements in the array : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int i = 0;

        System.out.println("Elements in the array are : ");

        for(i = 0 ; i < Arr.length ; i++)
        {
            System.out.println(Arr[i]);
        }
    }

    public int Addition()
    {
        int i = 0 , iSum = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            iSum = iSum + Arr[i];
        }

        return iSum;
    }

    public void finalize()
    {
        Arr = null;
        System.out.println("Inside finalize");
    }
}

public class Program261
{
    public static void main(String[] args)
    {
        int iLength = 0 , iRet = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept();
        aobj.Display();
        
        iRet = aobj.Addition();

        System.out.println("Summation of array of all elements are : "+iRet);

        aobj = null ; 
        System.gc();
    }
}