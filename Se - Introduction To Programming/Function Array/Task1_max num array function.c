//. Write a program to find out the max number from given array using function.

#include<stdio.h>
int max(int n[5])    //function with parameter
{
	int i, max=n[0];
	for(i=1; i<5; i++)   
	   {
	   	if(n[i]>max)  //condition for max number
	   	{
	   	  max= n[i];
	    }
	   }
	   return max;  //function with return
}

 main()
{
	int n[5], i;
  for(i=0; i<5; i++)   //loop for array input
    {
	  printf("Enter number: ");
	  scanf("%d", &n[i]);
    }
    
    int max_num = max(n);  //calling function 
	printf("max number: %d", max_num);  // print max number
}



