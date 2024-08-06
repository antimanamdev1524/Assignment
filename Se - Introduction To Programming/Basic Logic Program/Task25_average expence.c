//. Accept 5 expense from user and find average of expense.

#include<stdio.h>
main()
{
	int a[5], i, Avg, Total=0;
	printf("Enter 5 user expense:\n\n");
	
	for(i=0; i<5; i++)
	  {
	  	printf(" ");
	  	scanf("%d", &a[i]);  //array input for 5 user
	  }
	  
	for(i=0; i<5; i++)  //loop for total
	  {
	     Total= Total+a[i];
      }
      
      Avg= Total/i;  //average syntax
    printf("\nTotal: %d", Total);
    printf("\tAverage: %d", Avg);  //Average result
}


