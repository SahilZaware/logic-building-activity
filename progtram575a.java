import java.util.*;

class Matrix
{
    public int arr[][];

    public Matrix(int iRow , int iCol)
    {
        arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        System.out.println("Enter the values : ");

        Scanner sobj = new Scanner(System.in);

        int i = 0 , j = 0;

        for(i = 0; i < arr.length ; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the Matrix are : ");

        int i = 0 , j = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                System.out.println(arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int i = 0 , j = 0;

        int iSum = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                iSum = iSum + arr[i][j];
            }
        }
        return iSum;
    }
}

class progtram575a
{
    public static void main(String[] args)
    {
        int iRow = 0 , iCol = 0;

        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow , iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.Summation();
        System.out.println("Summation of all elements are : "+iRet);
    } 
}