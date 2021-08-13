class Calculation{
    int z;
    public void Addition(int x,int y){
        z = x + y;
        System.out.println("The addition of two numbers are: "+z);
    } 
    public void Subtraction(int x,int y){
        z = x - y;
        System.out.println("The Subtraction of two numbers are :"+z);
    }
}

 public class Inherit extends Calculation{
    public void Mul(int x, int y){
        z = x * y;
        System.out.println("Multiplication of two numbers are: "+z);
    }

    public static void main(String[] args) {
        Inherit cal = new Inherit();    
        cal.Addition(10,20);
        cal.Subtraction(20,10);
        cal.Mul(2,5);
    }
}