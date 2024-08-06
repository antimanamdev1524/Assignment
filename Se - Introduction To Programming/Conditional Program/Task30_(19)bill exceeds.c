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

//	//(If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe minimum bill should be of Rs. 256/-)

#include<stdio.h>
main()
{
	char Name[25];
	int ID;
	int Unit;
	
	printf("Enter Customer Details to print Electricity Bill: \n\nCustomer ID: ");
	scanf("%d", &ID);   //customer ID
	
	printf("Customer Name: ");
	scanf("%s", &Name);  //customer name
	
	printf("Electricity Unit: ");
	scanf("%d", &Unit);  //total units for electricity bill
	
	if(Unit<350)  //unit upto 350____@1.20 
	    {  
	       if(Unit*1.20<800)
	    	  { printf("The total amount to be paid: %2f Rs.", (float) Unit*1.20);}
	       else
	          {printf(" \n Dear customer, Your bill exceeds Rs. 800 then a surcharge of 18 percent will be charged\n\nthe total amount to be paid: %2f Rs.", (float) (Unit*1.20) + (Unit*1.20*0.18));}
		}
		 
	else if(Unit>=350 && Unit<600) //unit is 350 and above but less than 600___@1.50
	    {
	    	if(Unit*1.50<800)
	    	{ printf("The total amount to be paid: %2f Rs.", (float) Unit*1.50);}
	    	else
	          {printf(" \n Dear customer, Your bill exceeds Rs. 800 then a surcharge of 18 percent will be charged \n\nthe total amount to be paid: %2f Rs.", (float) (Unit*1.50) + (Unit*1.50*0.18));}	
		}
	
	else if(Unit>=600 && Unit<800)  //unit is 600 and above but less than 800___@1.80 
	    {   
	        if(Unit*1.80<800)
	    	{ printf("The total amount to be paid: %2f Rs.", (float) Unit*1.80);}
	    	else
	          {printf(" \n Dear customer, Your bill exceeds Rs. 800 then a surcharge of 18 percent will be charged \n\nthe total amount to be paid: %2f Rs.", (float) (Unit*1.80) + (Unit*1.80*0.18));}
		}
	
	else  //800 and above_@2.00 
	    {   
	        if(Unit*2<800)
	    	{ printf("The total amount to be paid: %2f Rs.", (float) Unit*2.00);}
	    	else
	          {printf(" Dear customer, Your bill exceeds Rs. 800 then a surcharge of 18 percent will be charged \n\nthe total amount to be paid: %2f Rs.", (float) (Unit*2.00) + (Unit*2.00*0.18));}
		}
}



