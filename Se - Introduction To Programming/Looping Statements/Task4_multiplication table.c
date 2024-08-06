//WAP to print table up to given numbers.

#include<stdio.h>
main()
{
	int n[5], i=1, j;  //initialization
	
	for(j=0; j<5; j++)
	{ 
    	printf("Table of: ");
    	scanf("%d", &n[j]);  //user i/p for multiplication table
    }    
	
	for(j=0; j<5; j++)
	{
		printf("\nTable: %d \n", n[j]);
		i=1;	  
	    while(i<=10)  //condition
	         {
	        	printf("%d*%d= %d ", n[j],i,n[j]*i); 
	        	printf("\n");
	        	
	        	i++;  //increament
             }
	}
	      
		     
	
	
	
    
}


