import java.util.Scanner;

class Arithmetic 
{
    public long Power(int A , int B)
    {
        int iCnt = 0;
        long iMult = 1;

        for(iCnt = 0; iCnt <= B; iCnt++)
        {
            iMult = iMult * A;
        }
        return iMult;
    }
}

class Program237
{
    public static void main(String args[])
    {
        int iNo1 = 0 , iNo2 = 0;
        long iAns = 0;

       Scanner sobj =  new Scanner(System.in);

       System.out.println("Enter Base : ");
       iNo1 = sobj.nextInt();

       System.out.println("Enter Index : ");
       iNo2 = sobj.nextInt();

       Arithmetic aobj = new Arithmetic();
       
       iAns = aobj.Power(iNo1 , iNo2);

       System.out.println("Power : "+iAns);
    }
}