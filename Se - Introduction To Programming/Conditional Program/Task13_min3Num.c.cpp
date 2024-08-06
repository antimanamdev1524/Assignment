//minimum number among 3 numbers using ternary operator
// nested if else

#include<stdio.h>
main()
{
	int num1, num2, num3;
	printf("num1= ");
	scanf("%d", &num1);
	
	printf("num2= ");
	scanf("%d", &num2);
	
	printf("num3= ");
	scanf("%d", &num3);
	
	if(num1<num2 && num1<num3) //num1 is minimum than num2 and num3
	  {
	  	 if(num1<num2)  
	  	    {
	  	    	printf("%d is minimum", num1);  //num1 is minimum than num2
			}
		 else
		    {
		    	printf("%d is minimum", num2);  //otherwise num2 is minimum
			}
	  }
	else
	  {
	     if(num2<num3)
	        {
	        	printf("%d is minimum", num2);  //num2 is minimum than num3
			}
		 else
		    {
		    	printf("%d is minimum", num3);  //otherwise num3 is minimum
			}
	  }
}
