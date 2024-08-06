//With return with parameter
/* #include<stdio.h>
Add(int a, intb)
{
     for(i=0; i<2; i++)
	  {
	  	 for(j=0; j<3; j++)
	  	 {
	  	     printf("Enter number")	
		 }
	  }
	
}

main()
{
	add(a[2][3]) //argument
	  for i,j;
	  
	  for(i=0; i<2; i++)
	  {
	  	 for(j=0; j<3; j++)
	  	 {
	  	      printf("enter elements");  ///1	
		 }
	  }
	
} */




//using twernary operator

/* #include<stdio.h>
main()
{
	int a; 
	printf("Enter a= ");
	scanf("%d", &a);
	
	a%2==0?printf("number is even"): printf("number is odd");
}  */


/* leap year using ternary operator

#include<stdio.h>
main()
{
	int a;
	printf("Enter year= ");
	scanf("%d", &a);
	
	a%4==0? printf("%d is leap year", a): printf("%d is normal year", a);
}  */


//task 6 array function
//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include<stdio.h>
#define row 2
#define col 3
main()
{
	int num[2][3]={{1,2,3},{4,5,6}}, i, j;
      for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   {
         	     	printf("Enter row element: ");
	                scanf("%d", &num[i][j]);
		       	
			   }
		 }
	int choice, add, mul, sub;
	float div;
	printf("\n1. add \t\t2. subtract \n3. multiply\t 4. Divide \n Enter your choice: ");
	scanf("%d", &choice);   		
	             	
	switch(choice)
	{
		case 1:
			 for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   {    
         	        add=0;
                  	add+= num[i][j];
		       }
         } 	
		printf("Addition: %d", add);
		break;
				
		case 2:
				sub= num[0][0];
			for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   { 
				 if (!(i == 0 && j == 0))   
                  	sub-=num[i][j];
		       }
         }
		printf("Subtraction: %d", sub);
		break;
				
		case 3:
			for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   {
         	   	    mul=1;
                  	mul*=num[i][j];
		       }
         }
         
		printf("Multiplication: %d", mul);
		break;	
				
		case 4:
			for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   {
         	   	    div= 1;
                  	div/=num[i][j];
		       }
         }
		printf("Division: %f", div);
		break;
		
		default:
		printf("please enter correct choice..");
		break;
	}	
}

















