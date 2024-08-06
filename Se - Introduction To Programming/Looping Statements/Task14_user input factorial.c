//. Accept 5 numbers from user and find those numbers factorials. 

#include<stdio.h>
main()
{
    int n[5], fact, i,j;
	
	for(i=0; i<5; i++)  
	   {
	   	   printf("Enter number: ");
	   	   scanf("%d", &n[i]);   //array input for 5 user
	   }
	   
	 for(i=0; i<5; i++)  //loop for every array elements (0,1,2,3,4) 
	    {
	    	fact=1;  //initialized factorial for every number
	    	for(j=1; j<=n[i]; j++)  //inner loop to calc fact of currunt n[i] element
	    	  {
	  	         fact*=j;  //fact logic to cal each num fact
	          }	
	          printf("factorial of %d is: %d\n", n[i], fact); //to execute factorial of n array element
		}	  
	        
}


