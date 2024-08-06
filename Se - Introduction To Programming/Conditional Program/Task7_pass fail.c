//Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	int marks; //data member
	
	printf("To check pass/fail students result \n\n Enter marks here: ");
	scanf("%d", &marks);  //user input for marks
	
	if(marks>=33)  //condition for pass or fail
    	{
	    	printf("Pass with Good Marks");
    	}
	else
	    {
	 	    printf("Failed");
     	}
}


