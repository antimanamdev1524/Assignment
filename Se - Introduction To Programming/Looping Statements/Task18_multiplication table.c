//Write a C Program to Print the Multiplication Table of N.

#include<stdio.h>
main()
{
	int n,i=1;
	printf("Enter number: ");
	scanf("%d", &n);
	
	while(i<=10)
	{
		printf("%d*%d= %d\n", n, i, n*i);
		i++;
	}
}
