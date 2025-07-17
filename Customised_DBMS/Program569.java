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

    public void InsertIntoTable(String name , int age , String address , int salary)
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

    // Select Count(Eno) from Employee;

    public void AggregateCount()
    {
        System.out.println("Number of records in the Employee table : "+lobj.size());
    }

    // Select Count(Esalary) from Employee;

    public void AggregateSum()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }

        System.out.println("Summation of records in the Employee table : "+iSum);
    }

    // Select Avg(Salary) From employee;

    public void AggregateAvg()
    {
        int iSum = 0;

        for(Employee eref : lobj)
        {
            iSum = iSum + eref.Esalary;
        }
        System.out.println("Average of records in the employee table : "+iSum / lobj.size());
    }

    // Select Max(Esalary) from Employee;

    public void AggregateMax()
    {
        int iMax = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary > iMax)
            {
                iMax = eref.Esalary;
            }
        }
        System.out.println("Maximum salary from the record is : "+iMax);
    }

    // Select Min(Esalary) from employee;

    public void AggregateMin()
    {
        int iMin = lobj.get(0).Esalary;

        for(Employee eref : lobj)
        {
            if(eref.Esalary < iMin)
            {
                iMin = eref.Esalary;
            }
        }
        System.out.println("Minimum salary from the record is : "+iMin);
    }

    // Update Employee Set Address = "Sangali" WHERE Eno = 3;

    public void UpdateRecord(int no , String address)
    {
        int index = 0;

        for(Employee eref : lobj)
        {
            if(eref.Eno == no)
            {
                eref.Eaddress = address;
                lobj.set(index , eref);
                break;
            }
            index++;
        }
    }
}

class Program569
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Welcome to Marvellous DBMS");

        MarvellousDBMS mobj = new MarvellousDBMS();

        int iOption = 0;
        String name = null;
        int age = 0;
        int salary = 0;
        String address = null;
        int id = 0;

        while(true)
        {

            System.out.println("-----------------------------------------------------------");

            System.out.println("Please select your option based on your requirement.");

            System.out.println("1 : Insert new record in the table.");
            System.out.println("2 : Display all records from the table.");
            System.out.println("3 : Display specific record from the table with ID.");
            System.out.println("4 : Display specific record from the table with Name.");
            System.out.println("5 : Delete the record from the table with Name.");
            System.out.println("6 : Count number of records from the table.");
            System.out.println("7 : Summation of all records salary.");
            System.out.println("8 : Average of all records salary.");
            System.out.println("9 : Maximum of all records salary.");
            System.out.println("10 : Minimum of all records salary.");
            System.out.println("11 : Update the existing record.");
            System.out.println("12 : Delete the table.");
            System.out.println("13 : Terminate the Marvellous DBMS.");

            System.out.println("-----------------------------------------------------------");

            iOption = sobj.nextInt();

            if(iOption == 1)
            {
                System.out.println("Enter the name of employee");
                name = sobj.nextLine();

                System.out.println("Enter the age of employee");
                age = sobj.nextInt();

                System.out.println("Enter the salary of employee");
                salary = sobj.nextInt();

                System.out.println("Enter the address of employee");
                address = sobj.nextLine();

                mobj.InsertIntoTable(name , age , address , salary);
            }
            else if(iOption == 2)
            {
                mobj.SelectStarFrom();
            }
            else if(iOption == 3)
            {
                System.out.println("Enter the employee ID whose data you want to display.");
                id = sobj.nextInt();
                mobj.SelectSpecific(id);
            }
            else if(iOption == 4)
            {
                System.out.println("Enter the employee name whose data you want to display.");
                name = sobj.nextLine();
                mobj.SelectSpecific(name);
            }
            else if(iOption == 5)
            {
                System.out.println("Enter the employee name that you want to delete.");
                name = sobj.nextLine();
                mobj.DeleteData(name);
            }
            else if(iOption == 6)
            {
                mobj.AggregateCount();
            }
            else if(iOption == 7)
            {
                mobj.AggregateSum();
            }
            else if(iOption == 8)
            {
                mobj.AggregateAvg();
            }
            else if(iOption == 9)
            {
                mobj.AggregateMax();
            }
            else if(iOption == 10)
            {
                mobj.AggregateMin();
            }
            else if(iOption == 11)
            {
                System.out.println("Enter the ID of employee that you want to update");
                id = sobj.nextInt();

                System.out.println("Enter the new address.");
                address = sobj.nextLine();

                mobj.UpdateRecord(id,address);
            }
            else if(iOption == 12)
            {
                mobj = null;
                System.gc();
                System.out.println("Database deleted successfully.");
            }
            else if(iOption == 13)
            {
                System.out.println("Thank you for using Marvellous DBMS");
                break;
            }
            else
            {
                System.out.println("Invalid Option.");
            }
        }
    }
}