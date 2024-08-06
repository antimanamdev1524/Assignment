//Write a program in C to find the maximum number of characters in a string. 

#include<stdio.h>
main()
{
	char a[25];
	int i, length, max_char=0;
	
	printf("string: ");
	gets(a);  //string user input
	
	length= strlen(a);  //string lengh count
	
	for(i=0; a[i]!='\0'; i++)   //loop for max value char
	  {
     	if(a[i]>max_char)     
      	 {
	        max_char= a[i];	  
	     }
      }
      
      printf("%c is max length character", max_char);
}


