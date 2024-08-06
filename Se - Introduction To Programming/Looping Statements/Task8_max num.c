//Write a program to find out the max from given number
 //(E.g., No: -1562 Max number is 6) 

#include<stdio.h>
main()
{
	int n[3], i, max_num; //data member
	{
		printf("Enter Three number to find max one: ");
		scanf("%d %d %d", &n[0], &n[1], &n[2]); 
	}
	max_num= n[0];  //iinitialized max_num outside loop
	
   for(i=1; i<3; i++)
   {
   	  if(n[i]>max_num) //if the current element n[i] is greater than max_num.
   	    {
   	    	
   	    	max_num= n[i]; //logic for max num
		}
   }
    	printf("max number: %d", max_num);  //print max number
       
}

