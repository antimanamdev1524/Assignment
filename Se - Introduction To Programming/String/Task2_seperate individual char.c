//Write a program in C to separate individual characters from a string.

#include<stdio.h>
main()
{
	char a[25];
	int i;
	
	   	  printf("Enter string: ");
	   	  gets(a);   //user input through string
	
	for(i=0; a[i]!='\0'; i++)  //loop for individual string char
	{
	printf("\n%c", a[i]);  //print chaacter individually
}
}



