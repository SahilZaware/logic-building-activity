import java.util.Scanner;

class Numbers
{
    public int EvenFactors(int iNo)
    {
        int iCnt = 0 , iSum = 0;

        if(iNo % 2 != 0)
        {
            return 0;
        }

        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                if(iCnt % 2 == 0)
                {
                    iSum  = iSum + iCnt;
                }
            }
        }
        return iSum;
    }
}

public class Program239
{
    public static void main(String[] args)
    {
        int iValue = 0 , iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Numbers nobj = new Numbers();
        iRet = nobj.EvenFactors(iValue);

        System.out.println("Addition of Even Factors is : "+iRet);
    }
}