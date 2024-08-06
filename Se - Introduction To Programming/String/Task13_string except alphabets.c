//13. Write a program in C to remove characters from a string except alphabets. 

#include<stdio.h>
main()
{
	char a[26], result[26];
	int i, j;
	
	printf("string: ");
	gets(a);   //string user input 
	
	for(i=0; a[i]!='\0'; i++)
	   {
	   	  	if(isalpha(a[i]))   //condition to accept only alpha string
	          {
	  	         result[j++]= a[i];   //result is new string which except only alphaets
	          }         
	   }
            result[j]='\0';	          
	        printf(" %s is alphabatical string", result);
}


