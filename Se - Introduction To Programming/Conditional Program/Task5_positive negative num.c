//Positive or Negative

#include<stdio.h>
main()
{
	int n;  //data member
	printf("To check positive or negative integer \nEnter a number here: ");
	scanf("%d", &n);  //user input for negative or positive number
	
	if(n>=0)  //for positive number
	 {
	 	printf("%d is positive number", n);
	 }
	else  
	 {
	 	printf("%d is negative number", n);
	 }
}



