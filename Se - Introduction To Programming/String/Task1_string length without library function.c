//1. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
main()
{
	char name[25], len=0;
	int i;
	 
	 printf("Enter name: ");
	 gets(name);    //user input through string
	 
	 for(i=0; name[i]!='\0'; i++)   
	    {
	      len++;    //without using library function
		           //count increasing lengh of string till not becomes zero 
		}
		
		printf("length of string: %d", len); //result to count string length
}


