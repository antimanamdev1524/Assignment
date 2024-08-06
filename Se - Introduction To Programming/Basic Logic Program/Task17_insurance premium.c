//"	17. Calculate person's insurance premium based on salary.

#include<stdio.h>
main()
{
	int sal;
	float premium, insurance_premium;
	printf("To calculate insurance premium based on salary: \n Salary: ");
	scanf("%d", &sal);  //salary input for user
	
	premium= 0.05;  //premium percentage
	insurance_premium= sal*premium;  //cal logic
	
	printf("insurance premium: %.2f Rs.", insurance_premium); //result
	
}



