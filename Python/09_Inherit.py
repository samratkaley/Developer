class parent:
    def __init__(self):
        print("Constructor");
    def Add(self,a,b):
        c=a+b;
        print("Addition of two numbers: ",c);
    def Sub(self,a,b):
        c=a-b;
        print("Subtraction of two numbers: ",c);
class Child(parent):
    def Mul(self,a,b):
        c=a*b;
        print("Multiplication of two numbers: ",c);
    
child1 = Child()
child1.Add(5,10)
child1.Sub(10,5)
child2 = Child()
child2.Mul(2,2)