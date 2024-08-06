//convert years into days and days into years 

#include<stdio.h>
main()
{
	
	printf("Press1_To convert years into days");
	printf("\nPress2_To convert days into years");
	
	int choice;
	printf("\n\nEnter choice");
	scanf("%d", &choice);
	
	if (choice==1)  //years into days
     	{
		    int years;
			printf("\nEnter years: ");
		    scanf("%d", &years);
		    
		    printf("%d years= %d days", years, (int)years*365);
    	}
    	  
	else if(choice==2)  //days into years
	    {
	    		int days;
	    		printf("\nEnter days: ");
	    		scanf("%d", &days);
	    		
	    		printf("%d days= %d years", days, (int) days/365);
		}
	else  //incorrect choice
	    {
	    	printf("please enter correct choice");
		}
}


