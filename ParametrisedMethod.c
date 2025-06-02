//Student

package ParametrisedMethod;

public class Student {

    String Name,Gender,City;
    int Age;

    void setInformation(String Na,String Ge,String Ci,int Ag)
    {
        Name = Na;
        Gender = Ge;
        City = Ci;
        Age = Ag;
    }
    void DisplayFullData()
    {
        System.out.println("Name is:"+Name);
        System.out.println("Gender is:"+Gender);
        System.out.println("City is: "+City);
        System.out.println("Age is:"+Age);

    }
}



//test

package ParametrisedMethod;

public class Test {

    public static void main(String[]args)
    {
        Student S1 = new Student();
        S1.setInformation("Karim","Male","Dhaka",25);
        S1.DisplayFullData();

        Student S2 = new Student();
        S2.setInformation("Karina","Female","Barishal",35);
        S2.DisplayFullData();

    }


}
