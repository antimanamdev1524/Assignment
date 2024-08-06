//Accept 5 employees name and salary in c programming
//count average and total salary.

#include<stdio.h>
int main()
{
	char Employee[5][100];    //array input[5]
	int Salary[5], i, Total=0, Average;
	
	for(i=0; i<5; i++)   //loop for employee name & salary
	    { 
	     printf("Employee Name= ");
	     scanf("%s", Employee[i]);
	   
	     printf("Salary= ");
	     scanf("%d", &Salary[i]);
    	}
	
	for(i=0; i<5; i++)     //to take loop output from compiler
     	{
	    	printf("\nEmployee Name= %s \t Salary= %d \n",Employee[i], Salary[i]);
    	}
	 
	for(i=0; i<5; i++)  // loop for salary sum
	    {
	        Total= Total+Salary[i];
            printf("\n\nTotal Salary= %d \n", Total);
        }
    
        Average= Total/5;  //avg. of total salary 
	    printf("\n Average= %d", Average);
    
}



