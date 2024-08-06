/*make simple calculator 
(operation include Addition, Subtraction, Multiplication, Division, modulo) 
using conditional statement. */

#include<stdio.h>
main()
{
	int add, sub, mul, div;
	
	    int a, b;  //user input for two numbers
      	 printf("A= ");
      	 scanf("%d", &a);
      	
      	 printf("B= ");
      	 scanf("%d", &b);
	
	printf("\nPress1_ for addition");  //calculation choice
	printf("\t\tPress2_for subtraction");
	printf("\n\nPress3 for Multiplication");
	printf("\tPress4 for Division");
		
    int choice;  //user input for choice
    printf("\n\n Enter Your Choice: ");
    scanf("%d", &choice);
    
    if(choice==1) //addition
      {
         printf("A+B= %d", (int) a+b);
	  }
	  
	else if(choice==2)  //subtraction
	  {
	  	 printf("A-B= %d", (int) a-b); 
	  }
	  
	else if(choice==3)  //multiplication
	  {
	  	 printf("A*B= %d", (int) a*b);
	  }
	else if(choice==4)  //division
	  {
	  	 printf("A/B= %2f", (float) a/b);
	  }
	  
	else
	  {
	  	printf("Please enter correct choice");
	  }
}


