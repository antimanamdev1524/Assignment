//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5) 

#include<stdio.h>
main()
{
	int n, first_digit, last_digit, sum;
	printf("Enter number: ");
	scanf("%d", &n); //user input for number
	
	last_digit= n%10; //last_digit logic(reminder)
	while(n>=10) //if number is greater than 10, we can get quotient
	   {
	   	  n= n/10; //quotient will be our first_digit
	   }
	    
	     first_digit= n;
	     sum= first_digit+ last_digit; //summation formula
	     printf("summation: %d", sum);
}


