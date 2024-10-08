//4) Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;

class Math  //class_name (Math)
{
	public:  //access specifier
	multiply(int a, int b)  //inline function
	 {
	 	cout<<"a*b= "<<a*b<<endl;  //multiply logic
	 }
	 
	 cubic(int num)  //inline function
	 {
	    cout<<"cubic: "<< num*num*num;	 //cube logic
	 }
};

main()
{
	int a, b, num;  //user input for multiply & cube
	cout<<"a= ";
	cin>>a;
	
	cout<<"b= ";
	cin>>b;
			
	Math obj;  //class derived into obj
	obj.multiply(a, b);  //call  multiply functions of Math class
	
	cout<<"\nTo find cubic\nEnter number: ";
	cin>>num;
	
	obj.cubic(num);  //call cube functions of Math class
}



