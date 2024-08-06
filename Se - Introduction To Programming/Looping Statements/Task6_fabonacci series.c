// WAP to print Fibonacci series up to given numbers. 

#include<stdio.h>
main()
{
	int n, t1=0, t2=1, next_term, i;
	printf("Enter number: ");
	scanf("%d", &n);  //user input for fabonacci series upto
	
	printf("fabonacci series is: ");
	
	for(i=1; i<=n; i++)
	{
		next_term= t1+t2; // fabonacci series logic
		t1= t2;
		t2= next_term;
		printf("%d,", next_term);  //print series to next term of 0 & 1
	}
}


