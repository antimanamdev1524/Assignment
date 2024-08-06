//Write a C program to calculate profit and loss on a transaction. 

#include<stdio.h>
main()
{
	int CA, DA, Profit, Loss;
	
	printf("Credit Amount= ");   
	scanf("%d", &CA);  //user i/p for Credit Amount
	
	printf("Debited Amount= ");
	scanf("%d", &DA);  //user i/p for Debited Amount
	
	Profit= DA-CA;  //when Deposited Amount is greater
	Loss= CA-DA;   //when Credited Amount is greater 
	
	if(DA>CA)
	 {
	 	printf("Profit= %d", Profit);   
	 }
	else
	 {
	 	printf("Loss= %d", Loss);
	 }
}


