//accept 5 numbers from user and check entered number is even or odd using of array 

#include<stdio.h>
main()
{
	int num[5], i;
	printf("Enter five numbers: \n");
	
     for(i=0; i<5; i++)
	    {
	  	    printf(" \t");
	  	    scanf("%d", &num[i]); //array input through user
    	}
	  
	 for(i=0; i<5; i++)
   	    {
	    	if(num[i]%2==0)   //condition to check even or odd
		     {
		 	    printf("Even numbers are: %d\n", num[i]);
		     }
	    	else
		     {
		 	    printf("odd numbers are: %d\n", num[i]);
		     }
	    }
}


