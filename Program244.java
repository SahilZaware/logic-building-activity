import java.util.*;

class Digits
{
    public int AdditionDigits(int iNo)
    {
        int iSum = 0;

        while(iNo != 0)
        {
            iSum = iSum + (iNo % 10);

            iNo = iNo / 10;
        }
        return iSum;
    }
}

class Program244
{
    public static void main(String[] args)
    {
        int iValue = 0 , iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.AdditionDigits(iValue);

        System.out.println("Addition of each digit will be : "+iRet);
    }
}