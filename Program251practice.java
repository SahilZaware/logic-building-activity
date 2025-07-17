import java.util.*;

class Digits
{
    public void CountDigit(int iNo)
    {
        int iCount[] = {0,0,0,0,0,0,0,0,0,0};
        int iDigit = 0 , i = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;

            iCount[iDigit]++ ;

            iNo = iNo / 10;
        }

        for( i = 0 ; i <= 9 ; i++)
        {
            System.out.println("Frequency of "+i+"is :"+iCount[i]);
        }
    }
}

class Program251practice
{
    public static void main(String[] args) 
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigit(iValue);
   
    }
}