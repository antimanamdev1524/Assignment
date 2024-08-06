//WAP to accept 5 numbers from user and display all numbers.

#include<stdio.h>
main()
{
   int num[5], i; 
   
   for(i=0; i<5; i++)
     {
   	 	printf("Enter Number: ");
	    scanf("%d", &num[i]);
     }
   
   for(i=0; i<5; i++)
     {
   	     printf("\nNumbers are: %d", num[i]);
     }
}


