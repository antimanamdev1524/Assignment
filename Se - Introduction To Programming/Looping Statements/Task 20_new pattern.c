//20.3  ....10... pattern

#include<stdio.h>
main()
{
	int i, j, k;
	
	for(i=0; i<9; i++)//row
	  {
	  	 for(k=0; k<i+2; k++) //space
	  	    {
	  	    	 printf("  ");
			}
		 for(j=0; j<=9-i; j++)  //column
		    {
		    	printf(" *  ");
			}
			 
			 printf("\n");
	  }
}

