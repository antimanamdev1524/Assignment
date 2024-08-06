//WAP to print factorial of given number. 

#include<stdio.h>
main()
{
	int n, fact=1, i;

		printf("To find factorial\n\nEnter number: ");
		scanf("%d", &n); //user i/p number to find factorial
	
	for(i=1; i<=n; i++)  //loop for factorial to create logic
	{
		fact= fact*i;  //factorial logic
	}
	printf("factorial is: %d", fact);
}


