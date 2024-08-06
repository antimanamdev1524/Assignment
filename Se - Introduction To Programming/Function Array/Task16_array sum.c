//16.Accept 5 numbers from user and perform sum of array 

#include<stdio.h>
main()
{
	int num[5], i, sum=0;
	printf("Enter five numbers: \n");
	
	for(i=0; i<5; i++)
	   {
	   	  printf(" ");
	      scanf("%d", &num[i]);  //array input for five numbers
	   }
	
	//logic for sum of array input
	
	for(i=0; i<5; i++)
	  {
	  	    sum= sum+num[i];	 //sum logic for array elements
	  }	
	  printf("sum is: %d", sum);  //print sum result
}


