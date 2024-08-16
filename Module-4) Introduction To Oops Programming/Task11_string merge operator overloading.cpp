//11) Write a program to concatenate 
//the two strings using Operator Overloading

#include<iostream>
using namespace std;

class merge
{
	 public: 
     char letter[50];
     
     merge()
      {
      	cout<<"string: ";
      	cin>>letter;
	  }
     
     //operator overloading for '+' to merge tqwo string
     merge operator + (const merge &s)
       {
       	  merge result;
       	  
       	  strcpy(result.letter, letter);
       	  strcat(result.letter, s.letter);
       	  return result;
	   }
	   
	   void display()
	    {
	    	cout<<"merge string: "<<letter<<endl;
		}
};

int main()
{
	merge s1, s2, result;
	
	cout << "String 1:" << endl;
    gets(s1);

    cout << "String 2:" << endl;
    gets(s2);
    
    result= s1 + s2;
    result.display();
    
}
