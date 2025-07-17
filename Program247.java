import java.util.*;

class Frequency
{
    public void FrequencyNumber(int iNo)
    {
        int iDigit = 0 , iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 9)
            {
                iCnt++;
            }

            iNo = iNo / 10;
        }
        System.out.println("Frequency of 9 is : "+iCnt); ;
    }
}

class Program247
{
    public static void main(String[] args)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the  number : ");
        iValue = sobj.nextInt();

        Frequency fobj = new Frequency();
        fobj.FrequencyNumber(iValue);

    }
}