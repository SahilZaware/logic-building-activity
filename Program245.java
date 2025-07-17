import java.util.*;

class Frequency
{
    public int CountFrequency(int iNo)
    {
        int iCnt = 0 , iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 5)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }
        return iCnt;
    }
}

class Program245
{
    public static void main(String[] args)
    {
        int iValue = 0 , iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Frequency fobj = new Frequency();
        iRet = fobj.CountFrequency(iValue);

        System.out.println("Frequency of 5 is : "+iRet);
    }
}