/*Accept monthly salary from the user and 
deduct 10% insurance premium, 
10% loan installment find out of remaining salary. */

#include<stdio.h>
main()
{
	int salary, insurance, loan, remaining;
	printf("Monthly Salary= ");
	scanf("%d", &salary); //user input for salary
	
	insurance= ((salary*10)/100);  //10% insurance deduction
	loan= ((salary*10)/100);      //10% loan installment
	remaining= (salary-(insurance+loan));
	
	printf("\nafter deducting (percent) \ninsurance premium= 10 \tloan installment= 10");
	printf("\n\n remaining salary= %d", remaining);  //remaining amount
}





