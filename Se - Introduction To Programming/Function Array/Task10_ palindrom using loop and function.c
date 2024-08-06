//WAP to perform Palindrome number using for loop and function 

//function used with parameter with return

#include<stdio.h>
int ispalindrom(int num)  //function with parameter
{
	int reverse_num=0, original_num, digit, i;  
	   original_num= num;	
	for(i=num; i!=0; i/=10)  //loop to reverse number till i (num) initialized) is not equal to zero
	   {
	   	  digit= i%10;  //to get last digit of i(num)
	   	  reverse_num= reverse_num*10+ digit;  //logic to reverse number
	   }
	   
	   return reverse_num==original_num;  //function with return	   
}

main()
{
	int num;  //data member
	printf("Enter number: ");
	scanf("%d", &num);    //string method used for user input
	 
	 printf("reverse num: %d ", );
	if(ispalindrom (num))   //condition for palindrom 
	 {
	 	printf("%d is palindrom", num);
	 }
	else
	 {
	 	printf("%d is not palindrom", num);
	 }	 
}


