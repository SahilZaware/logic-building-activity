import java.util.Scanner;

class Arithmetic 
{
    public int iValue1;
    public int iValue2;

    Arithmetic(int A , int B)
    {
        iValue1 = A;
        iValue2 = B;
    }
    public int Addition()
    {
        int iResult = 0;

        iResult = iValue1 + iValue2 ;

        return iResult ;
    }
}

class Program231
{
    public static void main(String args[])
    {
        int iNo1 = 0 , iNo2 = 0, iAns = 0;

       Scanner sobj =  new Scanner(System.in);

       System.out.println("Enter first number : ");
       iNo1 = sobj.nextInt();

       System.out.println("Enter the second number : ");
       iNo2 = sobj.nextInt();

       Arithmetic aobj = new Arithmetic(iNo1 , iNo2);
       
       iAns = aobj.Addition();

       System.out.println("Addition is : "+iAns);
    }
}