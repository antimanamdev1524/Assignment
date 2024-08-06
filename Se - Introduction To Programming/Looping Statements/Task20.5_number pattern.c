//pattern number

#include<stdio.h>
main()
{
	int i=1, j, num=1;
	
	for(i=0; i<=5; i++)  //outer loop for row upto
	  {
		 for(j=1; j<=i; j++)  //inner loop for column upto
		    {
		    	printf("%d ", num); //print character
		    	num++; //character increament
			}
			 
			 printf("\n"); //for next line
	  }
}


