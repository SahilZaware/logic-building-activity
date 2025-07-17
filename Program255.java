import java.util.* ;

class Program255
{
    public static void main(String[] args)
    {
        int iSize = 0 , i = 0 ;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements : ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements : ");

        for(i = 0 ; i < iSize; i++)
        {
           Arr[i] = sobj.nextInt();
        }

        System.out.println("Elements in the arrays are : ");

        for(i = 0 ; i < iSize; i++)
        {
            System.out.println(+Arr[i]);
        }
    }
}