//Rectangle Formula: A=wl
#include<stdio.h>
main()
{
	int  Area, length, width;
	printf("To find the area of Rectangle: \nlength: ");
	scanf("%d", &length); //user input for rectangle length
	
	printf("width: ");
	scanf("%d", &width); //user input for rectangle width
	
    Area= length*width;  //area of rectangle
	printf("Area= %d", Area);	
	
} 



