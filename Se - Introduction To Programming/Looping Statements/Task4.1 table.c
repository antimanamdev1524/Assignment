//side by side table upto 10

#include<stdio.h>
main()
{
	int i, j;
	printf("Multiplication Table of:\n\n");
	for(i=1; i<=10; i++)  //i initialized for user input
	   {     
	   	 printf("T-%d\t", i);
	   } 
	    
	    printf("\n");
	   //loop for side by side table
	    for(j=1; j<=10; j++) //row initialization
	{   
	    for(i=1; i<=10; i++)
		   {
		   	  printf("%d*%d=%2d\t", i, j, i*j); //table logic
		   }
		   printf("\n");
	}
}


