//. calculate the Factorial of a Given Number using while loop

#include<stdio.h>
main()
{
	int n, fact=1, i=1;  //initialization
	printf("Enter num: ");
	scanf("%d", &n);  //user input to find factorial num
	
	while(i<=n)  //factorial condition 
	{
		fact=fact*i;  //logic of factorial
		i++; //increament
	}
	  printf("factorial is: %d", fact);  //print facorial result 
}


