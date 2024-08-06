//WAP to input the week number and print week day. 

#include<stdio.h>
main()
{   
    int choice;
	printf("To know week day \n\nEnter the week number: ");
	scanf("%d", &choice);
	
	if(choice==1)
	{
		printf("Day is 'Monday'", choice);
	}

	else if(choice==2)
	{
		printf("Day is ''Tuesday'", choice);
	}

	else if(choice==3)
	{
		printf("Day is 'Wednesday'", choice);
	}

	else if(choice==4)
	{
		printf("Day is 'Thursday'", choice);
	}

	else if(choice==5)
	{
		printf("Day is 'Friday'", choice);
	}

	else if(choice==6)
	{
		printf("Day is 'Saturday'", choice);
	}

	else if(choice==7)
	{
		printf("Day is 'sunday'", choice);
	}

	else
	{
		printf("Invalid number");
	}
}

