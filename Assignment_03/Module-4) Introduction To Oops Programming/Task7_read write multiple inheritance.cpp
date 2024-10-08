/* 7) Create a class person having members name and age. 
Derive a class student having member percentage. 
Derive another class teacher having member salary. 
Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include<iostream>
using namespace std;

//Create a class person having members name and age.
class person  
{
	public: 
	  string name;
	  int age;	
	details()
	{
		cout<<"Name: ";
		cin>>name;
		
		cout<<"Age: ";
		cin>>age;
	}
};

//Derive a class student having member percentage.
class student
{
	public:
		  int percentage;
		percent()
		{
			cout<<"Student percentage: ";
			cin>>percentage;
		}	
};

//Derive another class teacher having member salary.
class teacher:public student, public person  
{
    public:
	  int salary;
	sal()
	{
		cout<<"Teacher Salary: ";
		cin>>salary;
	}
	
	read()  //reading all input data
	{
	   details();
	   percent();
	   sal();
	}
	write()  //displaying all input details
	{
	   	cout<<"\nName: "<<name<<endl;
	   	cout<<"Age: "<<age<<endl;
	   	cout<<"Student Percentage: "<<percentage<<"%"<<endl;
	   	cout<<"Teacher Salary: "<<salary<<endl;
	}
};
 
 main()
 { 	
 	teacher obj;
 	obj.read();
 	obj.write();
}


 

