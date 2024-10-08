/* 6) Assume a class cricketer is declared. 
Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. 
Member functions input data, calculate average runs, Display data. (Single Inheritance) */

#include<iostream>
using namespace std;

class Cricketer   //class name cricketer  
{
	public:    //access specifier
	string name, team;
	int age, matches_played;  //input data member
	details()   //blank function 
	   {
	   	  cout<<"Name: ";
	   	  cin>>name;
	   	  cout<<"Age: ";
	   	  cin>>age;
	   	  cout<<"Team: ";
	   	  cin>>team;
	   	  cout<<"Matches Played: ";
	   	  cin>>matches_played;
	   }
};

class Batsman:public Cricketer     //Declared a derived class batsman from cricketer
{
	public: 
		int Total_runs, Average_runs, best_performance; 
		runs()  //blank function
		{
			cout<<"Total runs: ";
	   	    cin>>Total_runs;
	   	   	   	    
	   	    cout<<"Best performance: ";
	   	    cin>>best_performance;
	   	    
	   	    //calculating..average runs
	   	    Average_runs =Total_runs/matches_played;
	   	    cout<<"Average runs: "<<Average_runs;
		}
};

main()
{	
	Batsman obj;   //created obj of batsman class
	obj.details();
	obj.runs();	
}




