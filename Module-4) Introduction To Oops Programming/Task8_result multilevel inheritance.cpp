/* 8) Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. 
Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance) */

#include<iostream>
using namespace std;

//Class Students are storing the roll number.
class Students
{
	public:
	int roll_num;
	details()
	{
	   cout<<"Student details\n Roll number: ";
	   cin>>roll_num;
	}	
};

//Class Test stores the marks obtained in two subjects
class Test: public Students
{
	public: 
	int hindi, eng;
	marks()
	{
	   cout<<"\nMarks \nHindi: ";
	   cin>>hindi;
	   cout<<"English: ";
	   cin>>eng;
    }
};

//class result contains the total marks obtained in the test.
class Result: public Test
{
	public:
	show_result()
	{
		int total_marks;
		total_marks=hindi+eng;
		cout<<"\nTotal marks obtained in the test: "<<total_marks;
	}			
};

main()
{
	Result obj;  //object created for Result class
	obj.details();
	obj.marks();
	obj.show_result();
}

