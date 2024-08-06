//read any Month Number in integer and display the number of days for this month. 

#include<stdio.h>
main()
{
	int choice;
	printf("To check the number of days in any month \n\nEnter any month number between 1 to 12:  ");
	scanf("%d", &choice);
	
/*  1         3         5         7    8         10          12
	31        31        31        31   31        31          31
	
	4        6       9      11  
    30       30      30     30
        
    2
    28/29 */  
	
	if(choice==2)  
	  {
	  	printf("28/29 days in %d month", choice); //2-feb
	  }
	else if(choice==4 || choice==6 || choice==9 || choice==11  )  
	  {
		   printf("30 days in %d month", choice); //4-april, 6-june, 9-sep., 11-nov.
	  }
	else if(choice==1 || choice==3|| choice==5 || choice==7 || choice==8 || choice==10 || choice==12)
	  {
	       printf("31 days in %d month", choice); //1-jan., 3-march, 5-may, 7-july, 8-aug, 10-oct., 12-dec.
	  }
	else
	  {
	  	printf("Please enter correct choice");
	  }
}

