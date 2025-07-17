import java.util.*;

class Digits
{
    public int MultiplicationDigits(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iMult = iMult * iDigit;

            iNo = iNo / 10;
        }
        return iMult;
    }
}

class Program241
{
    public static void main(String[] args)
    {
        int iValue = 0, iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of each digit is : "+iRet);
    }
}