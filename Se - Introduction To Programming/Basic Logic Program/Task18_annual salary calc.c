//Calculate person's Annual salary 

#include<stdio.h>
main()
{
	int n, result;
	printf("Enter monthly salary: ");
	scanf("%d", &n);   //user input for mothly salary
	
	result= n*12; //calculate annual salary
	printf("Annual salary= %d/-", result);  
}




