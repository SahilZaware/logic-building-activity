import java.util.*;

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow , int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Enter the values : ");

        Scanner sobj = new Scanner(System.in);

        int i = 0 , j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix are : ");

        int i = 0 , j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int iSum = 0;

        int i = 0 , j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr[i].length; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }
        return iSum;
    }
}

class Program575
{
    public static void main(String[] args)
    {
        int iRow = 0 , iCol = 0;

        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Please enter the number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.Summation();
        System.out.println("Summation of all elements are : "+iRet);
    }
}