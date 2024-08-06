//the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	printf("Year= ");
	scanf("%d", &year); //user input for year
	
	if(year%4==0 || year%400==0) //conditions to check leap year
	 {
	 	printf("%d is a leap year", year);
	 }
	else
	 {
	 	printf("%d is not a leap year", year);
	 }
}


