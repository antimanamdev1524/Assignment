//Convert minutes into seconds and hours 

#include<stdio.h>
main()
{
	int min;
	printf("Enter number= ");
	scanf("%d", &min); //user input for minutes
	
	//result calculation to convert min. into second & hours
	printf("%d minutes= %d seconds or %d hours",  min, (int)min*60, (int)min/60);
}




