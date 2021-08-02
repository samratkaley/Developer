
public class College{

public String name;
public int rollno;
public String  subject;

public  College(String studname){
	name = studname;
}

public void addRollNo(int studRollNo){
	rollno = studRollNo;
}

public void addSub(String sub){
	subject = sub;
}

public void display(){
	System.out.println("Student Name is: "+name);
	System.out.println("Student RollNo is: "+rollno);
	System.out.println("Student Subject is: "+subject);
}
public static void main(String args[]){
	College stud1 = new College("Samrat");
	stud1.addRollNo(1);
	stud1.addSub("Computer");
	stud1.display();

	stud1.College();
}

}
