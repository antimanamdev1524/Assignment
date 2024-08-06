//. Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include<stdio.h>
main()
{
	int n, i, sum=0, digit;
	printf("Enter number: ");
	scanf("%d", &n);
	
	while(n!=0) //loop runs untill n is not equal to zero
	     {		  		 
		 
	/*	 number= 413
		 digit= 413%10=3(reminder) || sum=   0+3= 3 || n= 413/10= 41
		 digit= 41%10=1(reminder)  || sum=   3+1= 4 || n= 41/10= 4
		 digit= 4%10= 4(reminder)  || sum=   4+4= 8 || n= 4/10= 0  */		 
		  
	     	digit= n%10; //last digit will be exract and give us reminder called digit   
	     	sum= sum+digit;  //reminder means last digit will be added into sum
	     	n=n/10;  //after extracting last digit remaining number(dividend) will be stored as n
		    i++;
		 }
		 printf("summation: %d", sum);	 
}


