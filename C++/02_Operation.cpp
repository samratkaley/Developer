#include<iostream>
using namespace std;

int main()
		// Arithmatic Operations :-
	{

		int a = 20;
		float b = 30;
		int c = 0;

		c = a+b;
		cout<<"Addition of two numbers are :"<<c<<endl;

		c = a-b;
		cout<<"Subtraction of two numbers are :"<<c<<endl;

		c = a*b;
                cout<<"Multiplication  of two numbers are :"<<c<<endl;

                c = b/a; 
                cout<<"Division  of two numbers are :"<<c<<endl;

		// Assignment Operators :-
		cout<<"Assignment Operators are as follows:-\n";
		a+=b;

                cout<<"Addition of two numbers are :"<<a<<endl;

                a-=b;
                cout<<"Subtraction of two numbers are :"<<a<<endl;

                a*=b;
                cout<<"Multiplication  of two numbers are :"<<a<<endl;

               b/=a;
                cout<<"Division  of two numbers are :"<<b<<endl;

		if(a==b)
		{
			cout<<"True\n";
		}
		else
		{
			cout<<"False\n";
		}
}
