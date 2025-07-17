import java.io.*;
import java.util.*;

class Program450
{
    public static void main(String[] args)
    {
        try
        {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the file name that you want to create.");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if(fobj.exists())
            {
                System.out.println("File is already existing in the folder.");
            }
            else
            {
                bRet = fobj.createNewFile();

                if(bRet == true)
                {
                    System.out.println("File is successfully create.");

                    FileOutputStream foobj = new FileOutputStream(fobj);

                    foobj.write("Jay Ganesh");
                }
                else
                {
                    System.out.println("Unable to create the file");
                }
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured..."+eobj);
        }
    }
}