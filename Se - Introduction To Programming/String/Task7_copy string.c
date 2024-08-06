//Write a program in C to copy one string to another string.

#include<stdio.h>
main()
{
	int a[5], b[5];
	
	printf("A= ");
	gets(a); //user input through string
	
	strcpy(b, a);   //copy string
	printf("B= %s (copy of a)", b);
}


