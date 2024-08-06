//20.2  ....10... pattern

#include<stdio.h>
main()
{
	int i, j, k;
	
	for(i=1; i<=9; i=i+2)  //row
	  {
	  	 for(k=1; k<=9-i; k++) //space
	  	    {
	  	    	 printf(" ");
			}
		 for(j=1; j<=i; j++)  //column
		    {
		    	printf(" *");
			}
			 
			 printf("\n");
	  }
}

