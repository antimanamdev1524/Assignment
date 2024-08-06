//36. Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition: 

#include<stdio.h>
main()
{
	char Name[25];
	int ID;
	int Unit;
	
	printf("Enter Customer Details to print Electricity Bill: \n\n Customer ID: ");
	scanf("%d", &ID);   //customer ID
	
	printf("Customer Name: ");
	scanf("%s", &Name);  //customer name
	
	printf("Electricity Unit: ");
	scanf("%d", &Unit);  //total units for electricity bill
	
	if(Unit<=50)  //For first 50 units Rs. 0.50/unit
	    {
	    	printf("The total amount to be paid: %.2f Rs.", (float) (Unit*0.50) + (Unit*0.50*0.20));
		} 
	else if(Unit>=50 && Unit<=150) //For next 100 units Rs. 0.75/unit 
	    {
	    	printf("The total amount to be paid: %.2f Rs.", (float) (Unit*0.75) + (Unit*0.75*0.20));
		}
	else if(Unit>150 && Unit<=250)  //For next 100 units Rs. 1.20/unit
	    {
	    	printf("The total amount to be paid: %.2f Rs.", (float) (Unit*1.20) + (Unit*1.20*0.20));
		}
	else    //For unit above 250 Rs. 1.50/unit
	    {
	    	printf("The total amount to be paid: %.2f Rs.", (float) (Unit*1.50) + (Unit*1.50*0.20));
		}
}


