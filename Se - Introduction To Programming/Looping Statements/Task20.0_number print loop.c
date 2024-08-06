//WAP program to print below output using for loop

#include<stdio.h>
main()
{
	int limit, i=01;
        	printf("print number upto: ");
	        scanf("%d", &limit);	 //loop run upto  user limit
	        
	for(i=01; i<=9; i++)   //loop upto 09 number
	   {
	   	 printf("0%d ", i);
	   }
	
	for(i=10; i<=10; i++)  //loop for 10
	   {
	   	 printf("%d ", i);
	   }
	     
	     printf("\n");
	     
	for(i=11; i<=limit; i++)  //loop from 11 to user limit
	   {
	   	 printf("%d ", i);
	   }
}


