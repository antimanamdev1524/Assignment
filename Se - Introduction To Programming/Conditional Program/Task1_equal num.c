//accept two integers and check whether they are equal or not.

#include<stdio.h>
main()
{
	int a, b;
	printf("Enter Num1 ");  
	scanf("%d", &a);  //user input for value of a
	
	printf("Enter Num2= ");
	scanf("%d", &b);  ////user input for value of b
	
	if(a==b)  // conditions for a equal to b or not.
	{
		printf("%d is equal to %d", a,b);
	}
	else
	{
		printf("%d is not equal to %d", a, b);
	}
}


