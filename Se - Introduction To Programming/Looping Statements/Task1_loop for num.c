//1. WAP to print 972 to 897 using for loop. 
#include<stdio.h>
main()
{
	int n, i=972;  //initialization
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(i=972; i>=n; i--)  
	{
		printf(" %d\t ", i);  
	}
}


