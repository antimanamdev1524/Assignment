//Write a program in C to compare two strings without using string library functions. 

#include<stdio.h>
main()
{
	char a[20], b[20];
	int i;
	
	printf("string1= ");
	gets(a);
	
	printf("string2= ");
	gets(b);
	
	for(i=0; a[i]!='\0'; i++)
	     {
	     	while(a[i]!=0 && b[i]!=0)
	     	{
	    	   if(a[i]!=  b[i])
	    	   {
	    	   	printf("compare string: %d", i);
			   }
	        }
	        
		 }
			    
		
}
