//Calculate compound interest.

#include<stdio.h>
#include<math.h>
main()
{
	int P, R, T;
	double SI, A, CI;//data member
	
	printf("To find CI, we have need to find SI \n\nwhere, \n P= "); 
	scanf("%d", &P); //user input for Price
	
	printf(" R= ");
	scanf("%d", &R); //user input for Rate
	
	printf(" T= ");
	scanf("%d", &T); //user input for Time 
	
	SI= (P*R*T)/100;  //calculating.. simple interest
	printf("\nSI= %.2f", SI);
	
	A= (P* pow(1+(R/100.0)),T);  //find amount to Calc CI
	printf("\tA= %.2f", A);
	
	CI= A-P;
	printf("\tCI= %.2f", CI);
	
/*	P=1000  R=5%  T=1yrs.
	si= 50
	a=1050
	ci  A-P 
	
	result is SI= 50 & CI=1*/
	
	
	
}




