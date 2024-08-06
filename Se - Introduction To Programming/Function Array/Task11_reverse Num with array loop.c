//WAP to accept 5 numbers from user and display in reverse order using for loop and array.

#include<stdio.h>
main()
{
	int num[5], i;  
	for(i=0; i<5; i++)  //loop for array input
	   {
	   	  printf("Enter number: ");
	   	  scanf("%d", &num[i]);  //user input through array
	   }
	   
	//to reverse order
	printf("\n\nDisplay numbers in reverse order: \n");
	for(i<5; i>=1; i--)   //loop for reverse order logic
	   {
	   	   printf("\n%d", i);
	   }
}


