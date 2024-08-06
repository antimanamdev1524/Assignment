//Calculate 5 numbers from user and calculate number of even and odd using of while loop.

#include<stdio.h>
main()
{
	int n[5], even_num=0, odd_num=0,i=0;
	for(i=0; i<5; i++)  //loop for array input
	   {
	   	  printf("Enter number: ");
	   	  scanf("%d", &n[i]); //array input from user
	   }   	
	     i=0;	  
         while(i<5) //loop for limit upto
            {
            	if(n[i]%2==0)  //condition for even number
				 {
				 	even_num++;  //increament upto even number
				 }
				else
				 {
				 	odd_num++;  //increament upto odd number
				 }	
              i++;
	        }		  	             			  	 
		//print result to count even & odd number
		      printf("Even number: %d\n", even_num);  
           	  printf("odd number: %d", odd_num);
}


