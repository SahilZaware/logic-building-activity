import java.util.Scanner;

class Calculation {
    public float CalculatePercentage(int iMarks, int Total) 
    {
        float fPercentage = 0.0f;

        fPercentage = ((float)iMarks / (float)Total) * 100;

        return fPercentage;
    }
}

class Program233 {
    public static void main(String args[]) {
        int iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the marks: ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the total marks: ");
        iNo2 = sobj.nextInt();

        Calculation cobj = new Calculation();

        fAns = cobj.CalculatePercentage(iNo1, iNo2);

        System.out.println("Percentage obtained is: " + fAns);
    }
}
