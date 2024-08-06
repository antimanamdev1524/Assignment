/*Write a program in C to calculate and print 
the electricity bill of a given customer. 
The customer ID, name, and unit consumed by 
the user should be captured from the keyboard 
to display the total amount to be paid to the customer. 
The charge are as follow : 
20. Unit                                     21. Charge/unit 
22. upto 350                                 23. @1.20 
24. 350 and above but less than 600          25. @1.50 
26. 600 and above but less than 800          27. @1.80 
28. 800 and above                            29. @2.00  */

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
	
	if(Unit<350)  //unit upto 350____@1.20 
	    {
	    	printf("The total amount to be paid: %2f Rs.", (float) Unit*1.20);
		} 
	else if(Unit>=350 && Unit<600) //unit is 350 and above but less than 600___@1.50
	    {
	    	printf("The total amount to be paid: %2f Rs.", (float) Unit*1.50);
		}
	else if(Unit>=600 && Unit<800)  //unit is 600 and above but less than 800___@1.80 
	    {
	    	printf("The total amount to be paid: %2f Rs.", (float) Unit*1.80);
		}
	else    //800 and above____@2.00
	    {
	    	printf("The total amount to be paid: %2f Rs.", (float) Unit*2.00);
		}
}

//Note: the minimum bill should be of Rs. 256/- (remaining in coding)  



