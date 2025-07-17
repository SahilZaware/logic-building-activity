import java.util.Scanner;

class Calculation {
    public float CalculateArea(float Width, float Height) {
        float fArea = 0.0f;

        fArea = Width * Height;

        return fArea;
    }
}

class Program235 {
    public static void main(String args[]) {
        float iNo1 = 0, iNo2 = 0;
        float fAns = 0.0f;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the width: ");
        iNo1 = sobj.nextFloat();

        System.out.println("Enter the height: ");
        iNo2 = sobj.nextFloat();

        Calculation cobj = new Calculation();

        fAns = cobj.CalculateArea(iNo1, iNo2);

        System.out.println("Area of Rectangle is: " + fAns);
    }
}
