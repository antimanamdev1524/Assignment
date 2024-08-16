//5. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class construct  //construct class created
{
	public:   //access specifier
		
			construct(int a, int b)  //constructor with parameter
			   {
			   	 add(a, b);
			   	 sub(a, b);
			   	 mul(a, b);
			   	 div(a, b);
			   }
			
		void add(int a, int b)
		{
			cout<<"addition is: "<<a+b;
		}
		void sub(int a, int b)
		{
			cout<<"\nsubtraction is: "<<a-b;
		}
		void mul(int a, int b)
		{
			cout<<"\nMultiplication is: "<<a*b;
		}
		void div(int a, int b)
		{
			cout<<"\nDivision is: "<<a/b;
		}
};

main()
{
	construct obj(15, 3);  //construct class object is created to pass value
}


