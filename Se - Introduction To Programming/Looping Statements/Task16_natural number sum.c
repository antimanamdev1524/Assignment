//. Calculate the Sum of Natural Numbers Using the While Loop. 
//natural  num( from 1 to 10) 

#include<stdio.h>
main()
{
	int limit, start_from=1, sum=0, i;
	
	printf("To calculate the Sum of Natural Numbers\n Enter limit here: ");
	scanf("%d", &limit);  //user input for limit upto
	
	while(start_from<=limit)  //loop will be run upto limit
	{
		sum= sum+start_from;  //sum logic loop will be start from 1 (natural number)
		start_from++;    //increament with 1(start_from
	}
	printf("sum is: %d", sum);
	
	
}


