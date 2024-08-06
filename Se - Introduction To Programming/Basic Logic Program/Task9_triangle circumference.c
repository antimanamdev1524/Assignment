//circumference of Triangle formula: triangle = a + b + c

 #include<stdio.h>
main()
{
	int a, b, c, result; //sides of triangle 
	
	//user input for triangle sides(a, b, c)
	printf("To find the circumference of a triangle: \n\n Side of a triangle are: \n");
	
	printf("A=");
	scanf("%d", &a);
	
	printf("B=");
	scanf("%d", &b);
	
	printf("C=");
	scanf("%d", &c);
	
	result= a+b+c; //circumference of a triangle
	printf("\nCircumference is:  %d", result);
	
} 

