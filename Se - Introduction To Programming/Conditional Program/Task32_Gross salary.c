// Write a C program to input basic salary of an employee and calculateits Gross salary.

#include<stdio.h>
main()
{
	int salary;
	printf("Enter Employeee salary: ");
	scanf("%d", &salary);
	
	if(salary<=10000)  //Basic Salary <= 10000 : HRA = 20%, DA = 80% 
    	 {
	    	   printf("after including 80_percent DA and 20_percent HRA \n\n Gross_salary: %.2f Rs.", (float) salary+(salary*0.80)+(salary*0.20));
	     }
	
	else if(salary<=20000)  //Basic Salary <= 20000 : HRA = 25%, DA = 90% 
     	 {
	    	 printf("after including  90_percent DA and 25_percent HRA \n\n Gross_salary: %.2f Rs.", (float) salary+(salary*0.90)+(salary*0.25));
	     }
		 
	else   //Basic Salary > 20000 : HRA = 30%, DA = 95%
     	 {
	    	 printf("after including  95_percent DA and 30_percent HRA \n\n Gross_salary: %.2f Rs.", (float) salary+(salary*0.95)+(salary*0.30));
	     }
		 	 
}


