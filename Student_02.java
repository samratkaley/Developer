public class Student{

public String  name;
private double salary;

public Student(String studName){
	name = studName;
//	System.out.println(name);
}

public void setSalary(double studSal){
	salary = studSal;
}

public void Justname(){
//	name = Onlyname;
	System.out.println(name);
}
public void  printAllInfo(){
	System.out.println("Name of the Student is: "+ name);
	System.out.println("Salary of the Student is: "+salary);
}

public static void main(String args[]){
	Student stud1 = new Student("Samrat");
	stud1.setSalary(500000);
	stud1.printAllInfo();

	Student stud2 = new Student("Omkar");
	stud2.setSalary(400000);
	stud2.printAllInfo();

	Student stud3 = new Student("Sanket");
	stud3.setSalary(300000);
	stud3.printAllInfo();

	Student stud4 = new Student("sagar");
	stud4.setSalary(1000);
	stud4.printAllInfo();

	stud1.Justname();
}
}
