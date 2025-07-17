import java.util.*;

class program526
{
    public static boolean LinearSearch(int Brr[] , int iNo)
    {
        int iStart = 0;
        int iEnd = 0;
        boolean bResult = false;

        for(iStart = 0 , iEnd = Brr.length - 1; iStart <= iEnd ; iStart++ , iEnd--)
        {
            if(Brr[iStart] == iNo || Brr[iEnd] == iNo)
            {
                bResult = true;
                break;
            }
        }
        return bResult;
    }
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int i , iSize , iValue = 0;
        boolean bRet = false;

        System.out.println("Enter the size of array : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the values : ");

        for(i = 0 ; i < iSize ; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements in the array are : ");

        for(i = 0 ; i < iSize ; i++)
        {
            System.out.println(Arr[i]+"\t");
        }

        System.out.println("Enter the element that you want to search : ");
        iValue = sobj.nextInt();

        bRet = LinearSearch(Arr,iValue);

        if(bRet == true)
        {
            System.out.println("Element is present...");
        }
        else
        {
            System.out.println("Element is not present...");
        }
    }
}