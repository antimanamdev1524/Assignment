//WAP to create simple calculator using class 

#include<iostream>
using namespace std;

class calc   //class name calc
{
    public:   //access specifier
	int a, b;  //data type declaration
		
		int add()   //add function
		{
		   cout<<"Addition is: "<<a+b<<endl;
		}
		int sub()   //sub function
		{
			cout<<"Subtraction is: "<<a-b<<endl;
		}
		int mul()   //multiply function
		{
			cout<<"Multiplication is: "<<a*b<<endl;
		}
		int div()   //divide function
		{	
			cout<<"Division is: "<<a/b<<endl;
		}
};

main()
{
	int a, b;   /*again variable declaration
	             because we are taking user input */
	cout<<"Enter \nA: ";
	cin>>a;   //user input for a
	
	cout<<"B: ";
	cin>>b;	   //user input for b
	
	calc obj;   //class declaration into obj
	obj.a=a;    //variable declared into obj of calc class
	obj.b=b;
	
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}

