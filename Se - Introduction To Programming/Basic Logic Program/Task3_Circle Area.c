//Find Area and Circumference of Circle

#include<stdio.h>
main()
{
	
	int r, area, circumference;
	printf("Enter radius= ");
	scanf("%d", &r);   //user input for radius 
	
	area= 3.14 * r*r;   //formula 
	circumference= 2*3.14*r; 
	
	printf("Area of circle= %d", area); 
	printf("\nCircumference= %d", circumference);
	
}





