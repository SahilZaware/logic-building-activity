import java.io.*;

class Program447
{
    public static void main(String[] args)
    {
        try
        {
            boolean bRet = false;

            File fobj = new File("Demo.txt");

            bRet = fobj.createNewFile();

            if(bRet == true)
            {
                System.out.println("File sucessfully created.");
            }
            else
            {
                System.out.println("Unable to create the file.");
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured.."+eobj);
        }
    }
}