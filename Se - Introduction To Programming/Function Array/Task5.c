/*5. WAP to take two Array input from user and sort them in ascending or descending order 
as per user's choice */

#include<stdio.h>
main()
{
		int a[2], i, j, temp; 
	for(i=0; i<2; i++)
	{ 
	  for(j=i+1; j<2; j++)
	   {
	      printf("Enter element: ");
	      scanf("%d", &a[i]);
	      
	      printf("Enter element: ");
	      scanf("%d", &a[j]);
	   }
	}
	/* for ascending order
	   23 21 26 45
	   21 23 26 45*/
	   int choice;
	   printf("\n'1' for ascending\t'2' for descending \nEnter Your Choice: ");
	   scanf("%d", &choice);
	 
	 switch(choice) 
	{
	 	
	   case 1:
	             for(i=0; i<2; i++)    
	{
		for(j=i+1; j<2; j++) //for ascending order
		{
		  if(a[i]>a[j])   //swapping method is using to process of asc order
		  {
		  	temp= a[i];    
		  	a[i]= a[j];
		  	a[j]= temp;
		  }
		}
	}
	
	
	   for(i=0; i<2; i++)   //output of asc order
	   {
	   	printf("ascending order is= %d\n", a[i]);
	   }
	   break;
	   
	   case 2:
	   	          for(i=0; i<2; i++)    
	{
		for(j=i+1; j<2; j++) //for ascending order
		{
		  if(a[i]<a[j])   //swapping method is using to process of asc order
		  {
		  	temp= a[j];    
		  	a[j]= a[i];
		  	a[i]= temp;
		  }
		}
	}
	
	
	   for(i=0; i<2; i++)   //output of asc order
	   {
	   	printf("desscending order is= %d\n", a[i]);
	   }
	   	break;
	}
	   
}
