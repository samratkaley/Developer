public class Student_02{

public String  name;
private double salary;

public Student_02(String studName){
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
	Student_02 stud1 = new Student_02("Samrat");
	stud1.setSalary(500000);
	stud1.printAllInfo();

	Student_02 stud2 = new Student_02("Omkar");
	stud2.setSalary(400000);
	stud2.printAllInfo();

	Student_02 stud3 = new Student_02("Sanket");
	stud3.setSalary(300000);
	stud3.printAllInfo();

	Student_02 stud4 = new Student_02("sagar");
	stud4.setSalary(1000);
	stud4.printAllInfo();

	stud1.Justname();
}
}
