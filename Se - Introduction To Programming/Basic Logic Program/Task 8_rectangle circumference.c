//circumference of Rectangle formula

#include<stdio.h>
main()
{
     int l, b, circumference;
	 
	 printf("Length= "); 
	 scanf("%d", &l); //user input for length
	 
	 printf("Breadth= ");
	 scanf("%d", &b);  //user input for breadth
	 
	 circumference= 2*(l+b);  //formula of rectangle circumference
	 printf("Circumference of rectangle= %d", circumference);
}




