import java.util.*;

class Employee
{
    public int Eno;
    public String Ename;
    public int Eage;
    public String Eaddress;
    public int Esalary;

    public Employee(int A, String B, int C, String D, int E)
    {
        Eno = A;
        Ename = B;
        Eage = C;
        Eaddress = D;
        Esalary = E;
    }

    public void DisplayInformation()
    {
        System.out.println("Employee no : "+Eno+", Name : "+Ename+", Age : "+Eage+", Address : "+Eaddress+", Salary : "+Esalary);
    }
}

public class Program549
{
    public static void main(String[] args)
    {
        LinkedList <Employee>lobj = new LinkedList<Employee>();

        Employee eobj1 = new Employee(1, "Sagar", 27, "Mumbai", 21000);
        Employee eobj2 = new Employee(2, "Nikhil", 28, "Pune", 51000);
        Employee eobj3 = new Employee(3, "Amit", 25, "Satara", 11000);

        lobj.add(eobj1);
        lobj.add(eobj2);
        lobj.add(eobj3);

        for(Employee eref : lobj)
        {
            eref.DisplayInformation();
        }
        
    }
}