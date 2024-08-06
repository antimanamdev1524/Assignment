//Convert kilometers into meters 

#include<stdio.h> //header file
main()   //main function
{
	float km; //data member
	printf("enter number: ");  
	scanf("%f", &km);  //user input for km 
	
	printf("%2f km= %3f m", km, (float)km*1000); //converting km into m
}



