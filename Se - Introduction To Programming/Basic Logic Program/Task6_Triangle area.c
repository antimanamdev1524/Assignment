//area of Triangle Formula: A = 1/2 × b × h 

#include<stdio.h>
main()
{
	int area, b, h;
	printf("b= ");    //breadth
	scanf("%d", &b);  
	
	printf("h= ");    //width
	scanf("%d", &h);
	
	area= (b*h)/2;    //area of triangle
	printf("Area of Triangle= %d", area);
}



