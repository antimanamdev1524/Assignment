//20.2  ....10... pattern

#include<stdio.h>
main()
{
	int i,j;
	
	for(i=0; i<=5; i++)  //outer loop for row
	{		
		for(j=1; j<=i; j++) //inner loop for column
		{
		    if(j%2==1)  //j diveded by 2 if reminder is 1
			  {
			  	 printf("1 ", i);  //print upto 1
			  }	
			else
			  {
			  	printf("0 ", j); //otherwise print upto 0
			  }
		}		 
		 printf("\n");  //for next line
	}    	
}
