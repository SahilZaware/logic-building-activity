import java.io.*;
import java.util.*;

class Program452
{
    public static void main(String[] args)
    {
        try
        {
            boolean bRet = false;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the name of the file that you want to create.");
            String name = sobj.nextLine();

            File fobj = new File(name);

            if(fobj.exists())
            {
                System.out.println("File is already existed in the folder");
            }
            else
            {
                fobj.createNewFile();

                if(bRet == true)
                {
                    System.out.println("File is created successfully");

                    FileOutputStream foobj = new FileOutputStream(fobj);

                    String str = "Jay Ganesh...";

                    foobj.write(str.getBytes());
                }
                else
                {
                    System.out.println("Unable to create the file.");
                }
            }
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured..."+eobj);
        }
    }
}