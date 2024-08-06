//3. Write a program in C to print individual characters of a string in reverse order 

#include<stdio.h>
main()
{
	char a[25];
	int i;
	
	printf("Enter string: ");
	gets(a);   //user input through string
		
	strrev(a);   //reverse to string
	printf("\nString reverse: %s", a);  
	
	printf("\n\nindividual to character of reverse string: ");   
	
	for(i=0; a[i]!='\0'; i++)   //loop for individual reverse string char
	  {
	    printf("\n%c\t", a[i]);
      }
}


