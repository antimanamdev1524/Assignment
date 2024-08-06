/* WAP to take 10 no. Input from user find out below values. 
    a. How many Even numbers are there 
    b. How many odd numbers are there 
    c. Sum of even numbers 
    d. Sum of odd numbers  */
    

#include<stdio.h>
main()
{
	//data member with array input
	int n[10], i, sum=0, odd_count=0, odd_sum=0, even_count=0, even_sum=0;
	
	for(i=0; i<10; i++)  //loop for ten no. user input
	   {
	   	 printf("Enter number: ");
	   	 scanf("%d", &n[i]);
	   }    
	   
	for(i=0; i<10; i++)  //loop for even odd analysis
	   {
	   	 if(n[i]%2==0)  //check condition for even num
	   	 {
	   	 	 printf("\t\t%d is even number", n[i]);
		 }
		 else  //otherwise condition for odd num
		 {
		 	 printf("\n%d is odd number", n[i]);
		 }
	   }  
	   
	for(i=0; i<10; i++) //loop for even odd count & sum
	{
		if((n[i]%2==0))   //check condition for even
		 {
		 	even_count++;  //count total even num
		 	even_sum+= n[i]; //total sum of even num
		 }
		else
		 {
		 	odd_count++;  //count total odd num
		 	odd_sum+=n[i];  //total sum of odd num
		 }	
	}       
		
	        //display result for even odd count & sum
	        printf("\n\nTotal even numbers= %d", even_count);
		 	printf("\tsum of even numbers= %d", even_sum);
		
		    printf("\n\nTotal odd numbers= %d", odd_count);
		 	printf("\tSum of odd number= %d", odd_sum);	
}





