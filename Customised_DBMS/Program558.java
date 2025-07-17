import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;    
    public int Esalary;

    public static int Counter;

    static
    {
        Counter = 1;
    }

    public Employee(String B , int C, String D, int E)
    {
        Eno = Counter++;
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }

    public void DisplayInformation()
    {
        System.out.println(Eno+"\t"+Ename+"\t"+Eaddress+"\t"+"\t "+Eage+"\t"+Esalary);
    }
}

class MarvellousDBMS
{
    public LinkedList <Employee>lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started successfully...");
        lobj = new LinkedList<Employee>();
    }

    protected void finalize()
    {
        System.out.println("Deallocating all resources of Marvellous DBMS...");
        lobj.clear();
        lobj = null;
    }

    // insert into employee values("piyush",34,"pune",11000);

    public void insertIntoTable(String name , int age , String address , int salary)
    {
        Employee eobj = new Employee(name , age , address , salary);
        lobj.addLast(eobj);
        System.out.println("Record inserted successfully into the table");
    }

    // select * from employee;

    public void SelectStarFrom()
    {
        System.out.println("---------------------------------------------");
        System.out.println("No\t Name \t Address \t Age \t Salary");
        
        System.out.println("---------------------------------------------");
        for(Employee eref : lobj)
        {
            eref.DisplayInformation();
        }
        System.out.println("---------------------------------------------");
    }

    // select * from employee where Eno = 3;

    public void SelectSpecific(int id)
    {
        for(Employee eref : lobj)
        {
            if(eref.Eno == id)
            {
                eref.DisplayInformation();
                break;
            }
        }
    }

    public void SelectSpecific(String str)
    {
        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                eref.DisplayInformation();
                break;
            }
        }
    }

    // delete from employee where Eno = 2;

    public void DeleteData(int no)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                bFlag = true;
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to remove the element as element is not there in the database");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // delete from employee where Ename = "Sagar";

    public void DeleteData(String str)
    {
        int index = 0;
        boolean bFlag = false;

        for(Employee eref : lobj)
        {
            if(str.equals(eref.Ename))
            {
                bFlag = true;
                break;
            }
            index++;
        }

        if(bFlag == false)
        {
            System.out.println("Unable to remove element as element is not there in the database.");
        }
        else
        {
            lobj.remove(index);
        }
    }
}

class Program558
{
    public static void main(String[] args)
    {
        MarvellousDBMS mobj = new MarvellousDBMS();

        mobj.insertIntoTable("Sagar", 27, "Pune", 11000);
        mobj.insertIntoTable("Amit", 28, "Mumbai", 21000);
        mobj.insertIntoTable("Pooja", 26, "Satara", 51000);
        mobj.insertIntoTable("Gauri", 28, "Nasik", 18000);

        mobj.DeleteData("Pooja");

        mobj.SelectStarFrom();
        
        mobj = null;
        System.gc();
    }
}