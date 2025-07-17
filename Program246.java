import java.util.*;

class Frequency
{
    public int FrequencyNumber(int iNo)
    {
        int iDigit = 0 , iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 7)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }
        return iCnt ;
    }
}

class Program246
{
    public static void main(String[] args)
    {
        int iValue = 0 , iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the  number : ");
        iValue = sobj.nextInt();

        Frequency fobj = new Frequency();
        iRet = fobj.FrequencyNumber(iValue);

        System.out.println("Frequency of 7 is : "+iRet);
    }
}