import java.util.*;

class Digits
{
    public int AdditionDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit ;

            iNo = iNo / 10;
        }
        return iSum;
    }
}

class Program243
{
    public static void main(String[] args)
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.AdditionDigits(iValue);

        System.out.println("Addition of each digit is : "+iRet);
    }
}