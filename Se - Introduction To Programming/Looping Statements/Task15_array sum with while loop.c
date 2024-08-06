//Calculate sum of 10 numbers using of while loop 

#include<stdio.h>
main()
{
	int n[10], sum=0,i=0;
	printf("To Calculate sum of 10 numbers using of while loop \n Enter numbers here: \n");
	
	for(i=0; i<10; i++)
	{
		printf(" ");
		scanf("\t%d", &n[i]); //user input upto n array
	}
	 
	 i=0;  //initialization for while loop
	 
	 while(i<10) //if array input is less than 10
	 {
	 	sum=sum+n[i];  //logic to sum each array element
	 	i++;  //increament for while loop
	 }
	 
	 printf("sum= %d", sum);  //print sum result outside loop
	 //note: while loop is being used only for calculation not to print result
}


