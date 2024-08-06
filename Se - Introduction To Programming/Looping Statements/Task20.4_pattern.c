//20.3  ....10... pattern

#include<stdio.h>
main()
{
	int i, j, k;
	
	for(i=1; i<=9; i++)//row
	  { 	
		 for(j=1; j<=i; j++)  //column
		    {
		    	printf("* ");  //start patter with right angle
			}			 
			 printf("\n");
	  }
	  
	  //copied to previos loop
	  
	for(i=1; i<=9; i++)//row
	  { 	
		 for(j=1; j<=9-i; j++)  //column
		    {
		    	printf("* ");
			}		 
			 printf("\n");
	  }
}
 

