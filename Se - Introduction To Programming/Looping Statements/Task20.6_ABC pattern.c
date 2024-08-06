//20.2  ....10... pattern

#include<stdio.h>
main()
{
	char ch='A'; 
	  //character initialization
	int i, j;
	
	for(i=1; i<=5; i++)  //outer loop for row upto
	  {
		 for(j=1; j<=i; j++)  //inner loop for column upto
		    {
		    	printf(" %s", ch); //print character
		    	 
			}
			 
			 printf("\n"); //for next line
	  }
}

