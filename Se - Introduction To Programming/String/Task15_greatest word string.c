//Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
main()
{
	char a[25], b[25];
	int i, word_count=0, in_word=0;
	
	printf("string_1: ");
	gets(a);
	
	printf("string_2: ");
	gets(b);
	
	for(i=0; a[i]!='\0'; i++)   //loop for count the word without space
	   {
	   	  if(isspace(a[i])&& isspace(b[i]))  //condition to remove/ encounter space
	   	    {
	   	        if(in_word==1)	
	   	           {
	   	             in_word=0;   //if word have any space it will be zero	
				   }
			}
			
		else
		   {
		   	  if(in_word==0)    //count the word without space
		   	     {
		   	       word_count++;
				   in_word=1;	
				 }
		   }
	   }
	
	for(i=0; a[i]!='\0'; i++)
	   {
	   	   if(a[i]>b[i])
	   	    {
	   	        printf("%s is greater", a[i]);	
			}
		  else
		    {
		    	printf("%s is greater", b[i]);
			}
	   }
	   
	
}
