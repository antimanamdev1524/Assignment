//Accept 5 names from user at run time. 

#include<stdio.h>
main()
{
	char n[5][25];
	int i;
	
	for(i=0; i<5; i++)  //loop to run five time for user i/p
	   {
	   	  printf("Enter number:%d ", i+1); //i+1 means name 1, 2,3, 4,5
	   	  scanf("%s", n[i]);
	   }
	for(i=0; i<5; i++) 
	   {
	   	  printf("names: %s\n", n[i]); //print the name from array input
	   }
}


