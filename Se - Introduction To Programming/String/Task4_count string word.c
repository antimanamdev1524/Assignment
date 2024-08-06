//Write a program in C to count the total number of words in a string

#include<stdio.h>
main()
{
	char a[25];
	int word_count=0, in_word=0, i;
	
	printf("string: ");
	gets(a);  //user input through string
	
	for(i=0; a[i]!='\0'; i++)   //loop for count the word without space
	   {
	   	  if(isspace(a[i]))  //condition to remove/ encounter space
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
	       printf("Total words: %d", word_count);
}




