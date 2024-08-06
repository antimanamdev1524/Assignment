//Store 5 numbers in array and sort it in ascending order 

#include<stdio.h>
main()
{
	int num[5], i, j, temp;
	for(i=0; i<5; i++)
	   {
	   	  printf("Enter number: ");
	   	  scanf("%d", &num[i]);   //array input for ascending order
	   } 
	   
	   //now loops and logic for ascending order
	   	printf("\nAscending order is: ");
	     for(i=0; i<=5-1; i++)   
	        {
	        	for(j=i+1; j<5; j++)
	        	   {
	        	   	   if(num[i]>num[j])   //ascending order logic of swapping
	        	   	     {
	        	   	     	 temp= num[i];  
	        	   	     	 num[i]= num[j];
	        	   	     	 num[j]= temp;
						 }
				   }
				printf("%d < ", num[i]);    //print numbers in ascending order
			}
			
                printf("\n");	
}


