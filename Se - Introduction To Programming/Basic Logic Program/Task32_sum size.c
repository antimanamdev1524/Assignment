//"	32. Accept 2 numbers and find out its sum check it size.

#include<stdio.h>
main()
{
	int num1, num2, sum, size;
	
	printf("num1: ");
	scanf("%d", &num1);
	
	printf("num2: ");
	scanf("%d", &num2);
	
	sum= num1+num2;
	printf("\nsum: %d\n", sum);
	
	printf("\nsizeof num1: %lu", sizeof (num1));
	printf("\tsizeof num2: %lu", sizeof (num2));
}


