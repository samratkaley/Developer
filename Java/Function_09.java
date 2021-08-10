class Function_09{

public static void main(String args[]){

int a = 10;
int b = 20;

add(a,b); // Function call
sub(a,b);

}
                    // Function Define
static int add(int num1, int num2){
int result;
result = num1 + num2; // Operation
System.out.println("Addition of two numbers are: "+result);
return result;
}

static int sub(int num1, int num2){
int result = num1 - num2;
System.out.println("Subtraction of two numbers are: "+result);
return result;
}

}
