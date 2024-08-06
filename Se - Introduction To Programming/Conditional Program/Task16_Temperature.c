/* . Write a C program to read temperature in centigrade and 
display a suitable message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot */

#include<stdio.h>
main()
{
	int temp
	;
	printf("Enter temperature: ");
	scanf("%d", &temp);
	
	if(temp<=10)
      {
      	 if(temp>0 && temp<=10)  //temp b/w 0-10 
      	   {
      	      printf("Temperature %d is Very Cold Weather", temp);	
		   }
		 else    //temp equal or less than 0
		   {
		   	  printf("Temperature %d is as freezing weather", temp);
		   }
	  }
	
	else if(temp<=30)
	  {
	  	  if(temp>10 && temp<=20) //temp b/w 10-20
	  	    {
	  	  	   printf("Temperature %d is Cold Weather", temp);
	        }
	      else   //temp b/w 20-30
	        { 
	        	printf("Temperature %d has Normal Weather in temperature", temp);
			}
	      
	  }	
	else
	  {
	  	  if(temp>30 && temp<40)  //temp b/w 30-39
	  	     {
	  	     	 printf("Temperature %d is Hot in weater", temp);
			 }
		  else  //temp is equal or more than 40
		     {
		     	 printf("Temperature %d is Very Hot in weather", temp);
			 }
	  }
}


