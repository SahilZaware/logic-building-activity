import java.util.*;

class BinarySearch
{
    public static boolean BinSearch(int Brr[] , int iNo)
    {
        int iStart = 0, iEnd = 0, iMid = 0;
        iEnd = Brr.length - 1;
        boolean bResult = false;

        while(iStart <= iEnd)
        {

            iMid = iStart + (iEnd - iStart) / 2 ;

            if(Brr[iMid] == iNo)
            {
                bResult = true;
                break;
            }

            if(iNo > Brr[iMid])
            {
                iStart = iMid + 1;
            }
            else
            {
                iEnd = iMid - 1;
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

        bRet = BinSearch(Arr,iValue);

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