//Convert temperature Fahrenheit to Celsius 

#include<stdio.h>
main()
{
	float C, F;  //
	
	printf("F = ");  //User input for Fahrenheit
	scanf("%f", &F);
	
    C= (F- 32) * 5/9;  //convert into Celcius
	printf("C = %f", C);	
}





