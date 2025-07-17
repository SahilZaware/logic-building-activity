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
        int i = 0 , j = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the values : ");

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0 , j = 0;

        System.out.println("Elements of Matrix are : ");

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                System.out.print(arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int i = 0 , j = 0 , iSum = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                iSum = iSum + arr[i][j];
            }
        }
        return iSum;
    }

    public int Counteven()
    {
        int i = 0 , j = 0 , iCount = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] % 2 == 0)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }

    public int SumEven()
    {
        int i = 0 , j = 0, iSum = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] % 2 == 0)
                {
                    iSum = iSum + arr[i][j];
                }
            }
        }
        return iSum;
    }

    public void DigitsCount()
    {
        int i = 0 , j = 0;

        int iNo = 0 ;
        int iCount = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                iNo = arr[i][j];

                while(iNo != 0)
                {
                    iCount++;

                    iNo = iNo / 10;
                }
                System.out.println("Count of digits in element "+arr[i][j]+" are : "+iCount);
                iCount = 0;
            }
        }
    }

    public void DigitsSum()
    {
        int i = 0, j = 0;

        int iNo = 0;
        int iSum = 0;
        int iDigit = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                iNo = arr[i][j];

                while(iNo != 0)
                {
                    iDigit = iNo % 10;

                    iSum = iSum + iDigit;

                    iNo = iNo / 10;
                }
                System.out.println("Summation of digit "+arr[i][j]+" are : "+iSum);
                iSum = 0;
            }
        }
    }

    public int MaximumNumber()
    {
        int i = 0 , j = 0;

        int MaxNum = arr[0][0];

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] > MaxNum)
                {
                    MaxNum = arr[i][j];
                }
            }
        }
        return MaxNum;
    }

    public int MinimumNumber()
    {
        int i = 0 , j = 0;
        int MinNum = arr[0][0];

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] < MinNum)
                {
                    MinNum = arr[i][j];
                }
            }
        }
        return MinNum;
    }

    public void UpdateOdd()
    {
        int i = 0 , j = 0;

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] % 2 != 0)
                {
                    arr[i][j]++;
                }
            }
        }
    }

    public void MaximumRow()
    {
        int i = 0 , j = 0;

        int iMax = 0;

        for(i = 0; i < arr.length; i++)
        {
            iMax = arr[i][0];

            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] > iMax)
                {
                    iMax = arr[i][j];
                }
            }
            System.out.println("Maximum number from the row "+i+" is "+iMax);
        }
    }

    public void MinimumRow()
    {
        int i = 0 , j = 0;

        int iMin = 0;

        for(i = 0; i < arr.length; i++)
        {
            iMin = arr[i][0];
            for(j = 0; j < arr[i].length; j++)
            {
                if(arr[i][j] < iMin)
                {
                    iMin = arr[i][j];
                }
            }
            System.out.println("Minimum number from the row "+i+" is "+iMin);
        }
    }

    public int SumDiagonal()
    {
        int i = 0 , j = 0;
        int iSum = 0;

        if(arr.length != arr[0].length)
        {
            System.out.println("Unable to perform the addition of diagonal elements.");
            return -1;
        }

        for(i = 0; i < arr.length; i++)
        {
            for(j = 0; j < arr[i].length; j++)
            {
                if(i == j)
                {
                    iSum = iSum + arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class Program586
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

        /*iRet = mobj.Summation();
        System.out.println("Summation of all elements are : "+iRet);

        iRet = mobj.Counteven();
        System.out.println("Count of even elements are : "+iRet);

        iRet = mobj.SumEven();
        System.out.println("Summation of even elements are : "+iRet);

        mobj.DigitsCount();
        mobj.DigitsSum();

        iRet = mobj.MaximumNumber();
        System.out.println("Maximum number in the Matrix are : "+iRet);
        
        iRet = mobj.MinimumNumber();
        System.out.println("Minimum number in the Matrix are : "+iRet);

        mobj.UpdateOdd();

        mobj.Display();*/

        //mobj.MaximumRow();
        //mobj.MinimumRow();

        iRet = mobj.SumDiagonal();
        System.out.println("Sum of all diagonal element is "+iRet);
    }
}