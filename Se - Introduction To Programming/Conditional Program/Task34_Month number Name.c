//34. Accept month number and display month name 
 

#include<stdio.h>
main()
{   
    int choice;
	printf("To know Month Name \n\nEnter the Month Number: ");
	scanf("%d", &choice);
	
	if(choice==1)
	{
		printf(" 'January' Month", choice);
	}
	else if(choice==2)
	{
		printf(" 'February' Month", choice);
	}
	else if(choice==3)
	{
		printf(" 'March' Month", choice);
	}
	else if(choice==4)
	{
		printf(" 'April' Month", choice);
	}
	else if(choice==5)
	{
		printf(" 'May' Month", choice);
	}
	else if(choice==6)
	{
		printf(" 'June' Month", choice);
	}
	else if(choice==7)
	{
		printf(" 'July' Month", choice);
	}
	else if(choice==8)
	{
		printf(" 'August' Month", choice);
	}
	else if(choice==9)
	{
		printf(" 'September' Month", choice);
	}
	else if(choice==10)
	{
		printf(" 'October' Month", choice);
	}
	else if(choice==11)
	{
		printf(" ' November' Month", choice);
	}
	else if(choice==12)
	{
		printf(" 'December' Month", choice);
	}
	else
	{
		printf("Invalid number");
	}
}

