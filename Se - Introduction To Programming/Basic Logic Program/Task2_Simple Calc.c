/*program to make Simple calculator 
(to make addition, subtraction, multiplication, division and modulo)*/

#include<stdio.h>
main()
{
	int a, b, sum, sub, mul;
	float div;
	
	printf("A= ");
	scanf("%d", &a);  //user input
	
	printf("B= ");
	scanf("%d", &b);  //user input
	
	sum= a+b;   //calculation
	sub= a-b;
	mul= a*b;
	div= a/b;
	
	printf("Sum = %d", sum);
	printf("\nSub = %d", sub);
	printf("\nmul = %d", mul);
	printf("\ndiv = %2f", div);		
}



