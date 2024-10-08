//11) Write a program to concatenate 
//the two strings using Operator Overloading

#include<iostream>
#include<cstring>    //because we are using strings
using namespace std;

class merge  //class name is merge
{
	 public: 
     char letter[200];    //data member
     
     merge()          //merge function without parameter
      {
      	cout<<"Enter string: ";
      	cin>>letter;   //this will be take multiple input because of same name of using class & functions 
	  }
     
     //operator overloading for '+' to merge two string
     merge operator + (const merge &s)
       {
       	  merge result;
       	  
       	  strcpy(result.letter, letter);
       	  strcat(result.letter, s.letter);
       	  return result;    //returns  the obj of merge class
	   }
	   
	display()  //this function is being used for print the result
	    {
	    	cout<<"merge string is: "<<letter<<endl;
		}
};

int main()
{
	merge s1, s2, result;
    
    result= s1 + s2;  //logic of merge two string
    result.display();   //calling to display function to print the result    
}
