/* 5. WAP to take two Array input from user and sort them in ascending or descending order 
as per user's choice */

#include<stdio.h>
main()
{
	int n[2], i, j, temp; 
	for(i=0; i<2; i++)
	{ 
	  for(j=i+1; j<2; j++)
	   {
	      printf("Enter element: ");
	      scanf("%d", &n[i]);
	      
	      printf("Enter element: ");
	      scanf("%d", &n[j]);
	   }
	}
	
		 int choice;
	   printf("\n'1' for Ascending \t '2' for Descending\nEnter Your Choice: ");
	   scanf("%d", &choice);
	

	 
	   switch (choice)
	   {
	        case 1:
	        		for(i=0; i<2; i++)
	                   {
	  	                  for(j=i+1; j<2; j++)
	  	                   { 
		  	                     	 	if(n[i]>n[j])
	  	 	  	                   	  {
	  	 	  	                   	  	 temp=n[i];
	  	 	  	                   	  	 n[i]= n[j];
	  	 		  	                  	 n[j]= temp;
			  	                   	  }
			  	                   	  	printf("Ascending order is: ");
			  	                   	  	printf("%d", n[i]);
	  	                    }
	  	                }
		    break;
		    
		    case 2:
		    	   	for(i=0; i<2; i++)
	                   {
	  	                  for(j=i+1; j<2; j++)
	  	                   { 
		  	                     	 	if(n[i]<n[j])
	  	 	  	                   	  {
	  	 	  	                   	  	 temp=n[j];
	  	 	  	                   	  	 n[j]= n[i];
	  	 		  	                  	 n[i]= temp;
			  	                   	  }
			  	                   	  	printf("Descending order is: ");
			  	                   	    printf("%d", n[j]);
	  	                    }
					   }
	    	                            printf("\n");
		    break;
		   
		    default:
		      	printf("Please enter correct choice'1' for ascending or '2' for descending");
		   	break;
	}
		 
}

