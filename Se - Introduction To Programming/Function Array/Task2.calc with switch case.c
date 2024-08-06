//WAP of Addition, Subtraction, Multiplication and Division using Switch case.

#include<stdio.h>
main()
{
	int add, sub, mul, div, n1, n2;
	printf("Press_1 for Addition\n");
	printf("Press_1 for Subtraction\n");
	printf("Press_1 for Multiplication\n");
	printf("Press_1 for Division\n");
	
	int choice;
	printf("\nEnter Your Choice: ");
	scanf("%d", &choice);
	
    printf("\nEnter number n1 & n2: ");
	scanf("%d %d", &n1, &n2);
	
	switch(choice)
	{
		case 1:
		printf("Sum= %d", (int) n1+n2);
		break;
		
 		case 2:
		printf("Sub= %d", (int) n1-n2);
		break;
		
		case 3:
		printf("Mul= %d", (int) n1*n2);
		break;
		
		case 4:
		printf("Div= %d", (int) n1/n2);
		break;
		
		default:
		printf("please enter correct choice");
		break;			
	}
}

