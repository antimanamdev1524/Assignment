//4. WAP to find factorial using recursion

#include<stdio.h>
int fact(int n)  //fact function defined
  {
  	 if(n==0 || n==1)  //if n is 0 or 1 fact will be 1
  	  {
  	     return 1;	
	  }
	else
      {
	  return n*fact(n-1);  //otherwise use factorial syntax using recurssion
      }
  }

int main()
{
	int n, result;  //defined a variable and take an int to store a num 
	printf("Enter a number here: ");
	scanf("%d", &n); //a number storing by user input
	
	result= fact(n);   //calling a recursive function to calc factorial
	printf("Factorial of %d is: %d\n", n, result);  //printing... fact result
}



