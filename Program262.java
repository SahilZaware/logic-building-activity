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

    public int Maximum()
    {
        int i = 0 , iMax = Arr[0] ;

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] > iMax)
            {
                iMax = Arr[i];
            }
        }
        return iMax ;
    }

    public void finalize()
    {
        Arr = null;
        System.out.println("Inside finalize");
    }
}

public class Program262
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
        
        iRet = aobj.Maximum();

        System.out.println("Maximum number is : "+iRet);

        aobj = null ; 
        System.gc();
    }
}