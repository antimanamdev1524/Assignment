/* 9) Write a program to Mathematic operation like 
Addition, Subtraction, Multiplication, Division of two number 
using different parameters and Function overloading */

#include<iostream>
using namespace std;

//Mathematic operation using different parameters and Function overloading
class math
{
	public:
		calc(int a, int b)
		{
			cout<<"addition: "<<a+b;
	    }
	    
		calc(int x, float y)
		{
			cout<<"\nsubtraction: "<<x-y;
		}
		
		calc(float p, float q)
		{
			cout<<"\nMultiplication: "<<p*q;
	    }
	
		calc(double i, double j)
		{
			cout<<"\nDivision: "<<i/j;
		}		
};

main()
{
	math obj; //math class obj created
	obj.calc(10, 20);    //function called into math class obj
	obj.calc(10, 20.05f);
	obj.calc(10.25f, 20.50f);
	obj.calc(100.125, 20.5);
}


