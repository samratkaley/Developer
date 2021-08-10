#include<iostream>
using namespace std;

int add(int num1, int num2); // Function Declaration
int sub(int num1,int num2);
int main(){
int a = 10;
int b = 20;
int c;
int d;
c = add(a,b); // Function calling by refrence
d = sub(a,b);
cout<<"thank you"<<endl;
return 0; 
}

int add(int num1,int num2){   // Function define 
int result; // local variable
result = num1 + num2;
cout<<"Addition of Two numbers are: "<<result<<endl;
return result;
}

int sub(int num1,int num2){  // Function define
int result;
result = num1 - num2;
cout<<"Subtraction of Two numbers are: "<<result<<endl;
return result;
}

