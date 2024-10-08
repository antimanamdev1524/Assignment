//14. Write a program to find the max number from given two numbers using friend function 

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
		max(A &obj)    //without using inheritance access the property of class A
		{     
		    if(obj.a>obj.b)  //max  number logic
			  {
			  	  cout<<"A is greater";
			  } 
			else
			  {
			  	  cout<<"B is greater";
			  }	
		}
};

main()
{	
	A obj;
	obj.input();
	
	B obj2;
	obj2.max(obj);	
}





