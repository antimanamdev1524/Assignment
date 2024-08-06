/*the value of an integer m 
and display the value of 
n is 1 when m is larger than 0, 
n is 0 when m is 0 and 
n is-1 when m is less than 0 */

#include<stdio.h>
main()
{
	int m;
	
	printf("m= ");
	scanf("%d", &m);
	
	if(m>0)  //when m is largen than 0
	  {
	  	printf("n = 1");  
	  }
	else if(m==0)  //when m is equal to 0
	  {
	  	printf("n = 0");
	  }
	else   //when upper both conditions are false
      {
      	printf("n = -1");
	  }
}



