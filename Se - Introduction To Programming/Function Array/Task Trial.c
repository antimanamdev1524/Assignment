//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include<stdio.h>
#define row 2
#define col 3
main()
{
	int num[2][3]={{1,2,3},{4,5,6}}, i, j;
      for(i=0; i<row; i++)  //row
         {
         	for(j=0; j<column; j++)  //column
         	   {
         	     	printf("Enter row element: ");
	                scanf("%d", &num[i][j]);
	
                	printf("Enter column element: ");
	                scanf("%d", &num[i][j]);	       	
			   }
		 }
	int choice, add, sub, mul, div;
	printf("Enter your choice: \n1. add \n2. subtract \n3. multiply\n 4. Divide ");
	scanf("%d", &choice);
	 for(i=0; i<=2; i++)  //row
         {
         	for(j=0; j<=3; j++)  //column
         	   {
                  	add=num[i] + num[j];
                	sub=num[i] - num[j];
             		mul=num[i]*num[j];
	             	div=num[i]/num[j];
		 }
} 	
	switch(choice)
	{
		case 1:
		printf("Addition: %d", add);
		break;		
		case 2:
		printf("Subtraction: %d", sub);
		break;		
		case 3:
		printf("Multiplication: %d", mul);
		break;			
		case 4:
		printf("Division: %d", div);
		break;
		default:
		printf("please enter correct choice..");
		break;
	}	
}
