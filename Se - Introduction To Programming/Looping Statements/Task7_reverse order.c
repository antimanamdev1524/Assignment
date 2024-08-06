//WAP to print number in reverse order. 
//e.g.: number = 64728 ---> reverse = 82746 

#include<stdio.h>
main()
{
	int n, i, reverse=0, reminder;  //Initialized a variable `reverse` to 0.
	printf("enter number: ");
	scanf("%d", &n);
	
	while(n!=0)
	 {
	 	reminder=n%10; //Calculating the remainder when `n` is divided by 10:
		reverse= reverse*10 + reminder; //Update `reverse` by multiplying it by 10 and adding the `remainder
    	n/=10;   //Reduce the value of `n` by dividing it by 10
	 }
	 printf("reversed number: %d", reverse);  //final value of `reverse number will be...
}



