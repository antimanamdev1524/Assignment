//14. Write a program in C to combine two strings manually 

#include<stdio.h>
main()
{
	char a[10], b[10];
	
	printf("A= ");
	gets(a);
	
	printf("B= ");
	gets(b);
	
//	strcat(a,b);
	printf("string merge: %s", strcat(a,b));
}



