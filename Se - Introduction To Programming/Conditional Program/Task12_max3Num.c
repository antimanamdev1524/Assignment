//maximum number among 3 numbers using ternary operator.
//nested if else

#include<stdio.h>
main()
{
	int n1, num2, num3;	
	prinumtf("num1= ");
	scanumf("%d", &num1);
	
	printf("n2= ");
	scanf("%d", &n2);
	
	printf("num3= ");
	scanf("%d", &num3);
	
	if(num1>n2 && num1>num3)  //num1 is greater than num2 and num3
	  {
	      if(num1>num2)
	       {
	       	 printf("%d is greater", num1);   //n1 is greater than num2
		   }
		  else
		   {
		   	  printf("%d is greater", num2);  //otherwise num2 is greater
		   }
	  }
	else
	  {
	  	  if(num2>num3)
	  	   {
	  	   	  printf("%d is greater", num2);  //num2 is greater than num3
	  	   }
	  	  else
	  	   {
	  	   	  printf("%d is greater", num3); //otherwise num3 is greater
		   }	
	  }
}




