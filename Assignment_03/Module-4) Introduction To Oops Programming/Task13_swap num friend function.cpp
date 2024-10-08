//13) Write a program to swap the two numbers using friend function without using third variable

#include<iostream>
using namespace std;

class A
{
   public:
   	int a, b;
   	
   	input()
      {
      	 cout<<"A: ";
         cin>>a;  //user input
   
         cout<<"B: ";
         cin>>b;
	  }     
         friend class B;   //frind function	
};

class B
{
	public:
		swap(A &obj)    //without using inheritance access the property of class A
		{     
		   //a=10, b=6  swapping logic
		    obj.a= obj.a+obj.b;   
			obj.b= obj.a-obj.b; 
			obj.a= obj.a-obj.b;  	
		}
};

main()
{	
	A obj;
	obj.input();
	
	B obj2;
	obj2.swap(obj);
	
	cout << "After swapping: " << endl;
	cout << "A: " << obj.a << endl;
	cout << "B: " << obj.b << endl;
}



