//WAP to find number is even or odd using ternary operator.

#include<stdio.h>
main()
{
	int num;  //data member
	
	printf("To check even or odd number \n\n Enter a number here: ");
	scanf("%d", &num);  //user input to check even or odd
	
	if(num%2==0)  // condition for even odd number
	{
		printf("%d is even number", num);
	}
	else 
	{ 
	    printf("%d is odd number", num);
	}
}


