import java.io.*;
import java.util.*;

class Program448
{
    public static void main(String[] args)
    {
        try
        {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name that you want to create : ");
            String name = sobj.nextLine();

            File fobj = new File(name);

            bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File successfully created.");
            }
            else
            {
                System.out.println("Unable to create the file.");
            }
        }
        catch(Exception eobj)
        {
           System.out.println("Exception occured..."+eobj);
        }
    }
}