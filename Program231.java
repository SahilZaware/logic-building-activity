import java.util.Scanner;

class Arithmetic 
{
    public int Addition(int A , int B)
    {
        int iResult = 0;

        iResult = A + B ;

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

       Arithmetic aobj = new Arithmetic();
       
       iAns = aobj.Addition(iNo1 , iNo2);

       System.out.println("Addition is : "+iAns);
    }
}