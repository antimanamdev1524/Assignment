//12.WAP to accept 5 students name and store it in array 

#include<stdio.h>
main()
{
	char name[5][25];  
	int i;
	printf("Enter five students name: \n\n");
	
	for(i=0; i<5; i++)  //loop for array 
	  {
	  	 printf(" \t");
	  	 scanf("%s", name[i]);  //array input from user
	  }
	  
	  printf("array stores: \t");
	for(i=0; i<5; i++)   
	  {
	  	printf("%s\t", name[i]);  //show data that array stores
	  }
}


