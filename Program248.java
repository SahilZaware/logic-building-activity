import java.util.* ; 

class Frequency
{
    public void CountDigit(int iNo)
    {
        int iDigit = 0;
        int iCnt5 = 0 , iCnt6 = 0, iCnt7 = 0, iCnt8 = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit == 5)
            {
                iCnt5++;
            }
            else if(iDigit == 6)
            {
                iCnt6++;
            }
            else if(iDigit == 7)
            {
                iCnt7++;
            }
            else
            {
                iCnt8++;
            }

            iNo = iNo / 10;
        }
        System.out.println("Frequency of  5 is : "+iCnt5);
        System.out.println("Frequency of  6 is : "+iCnt6);
        System.out.println("Frequency of  7 is : "+iCnt7);
        System.out.println("Frequency of  8 is : "+iCnt8);
        
    }
}

class Program248
{
    public static void main(String[] args)
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Frequency fobj = new Frequency();
        fobj.CountDigit(iValue);
    }
}