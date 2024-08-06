//Convert years into days and months 

#include<stdio.h>
main()
{
	int n;
     printf("Enter number here: ");
    scanf("%d  ", &n);  //user input for number
    
	printf("\n %d years are= ", n);
    
    printf("%d years are= %d days or %d months ", (int) n*365); //convert years into days
    printf(" or %d months", (int) n*12); //converting years into month
}



