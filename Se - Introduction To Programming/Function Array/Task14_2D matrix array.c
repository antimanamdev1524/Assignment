//Perform 2D matrix array 

#include<stdio.h>
main()
{
	int table[2][3], i,j;   //2-row, 3-column
	
	for(i=0; i<2; i++)  //loop for row
	    {
	    	for(j=0; j<3; j++)  //loop for column
	    	    {
	    	    	printf("Enter element: ");
	    	    	scanf("%d", &table[i][j]);    //user input for row & column	    	
				}
		}
		
		//to print the table
		printf("\n2D matrix elements are:\n");
		
	for(i=0; i<2; i++)  //loop for row
	    {
	    	for(j=0; j<3; j++)  //loop for column
	    	    {
					printf("%d \t", table[i][j]);  //print matrix   	    	
				}
				printf("\n");
		}
}


