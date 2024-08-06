//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array 

#include<stdio.h>
#define row 2
#define col 3
main()
{
	int num[2][3]={{1,2,3},{4,5,6}}, i, j;   //using 2-D array
      for(i=0; i<2; i++)  //row
         {
         	for(j=0; j<3; j++)  //column
         	   {
         	     	printf("Enter row element: ");      
	                scanf("%d", &num[i][j]);  //user input of 2-D array
		       	
			   }
		 }
	int choice, add, mul, sub;
	float div;
	printf("\n1. add \t\t2. subtract \n3. multiply\t 4. Divide \n Enter your choice: ");
	scanf("%d", &choice);   		
	             	
	switch(choice)
	{
		case 1:                                      //add_value: {{1,2,3}, {4,5,6}}
			 add=0;                                   //add element row by row           
			 for(i=0; i<2; i++)  //row                    start with '0'           
         {                                            // 0 + 1 = 1      6 + 4 = 10               
         	for(j=0; j<3; j++)  //column                 1 + 2 = 3     10 + 5 = 15                
         	   {                                      // 3 + 3 = 6     15 + 6 = 21
                  	add+= num[i][j];                  // (now add second row element
		       }                                      // start with '6' (first row result)
         } 	                                             
		printf("Addition: %d", add);                 //Addition: 21            
		break;                                          
	                                                   				
		case 2:                                      //sub_value: {{1,2,3}, {4,5,6}}
				sub= num[0][0];
			for(i=0; i<2; i++)  //row                    first element=1  num[0][0]
			                     
         {                                           //  1-2= -1
         	for(j=0; j<3; j++)  //column                -1-3= -4
         	   {                                     // -4-4= -8
				 if (!(i == 0 && j == 0))            // -8-5= -13            
                  	sub-=num[i][j];                  // -13-6= -19 
		       }
         }
		printf("Subtraction: %d", sub);               //subtraction: -19     
		break;           
				
		case 3:                                      //mul_value: {{1,2,3}, {4,5,6}}
			mul=1;
			for(i=0; i<2; i++)  //row               let's calculate step by step  
         {                                
         	for(j=0; j<3; j++)  //column                 1*2 = 2
         	   {       	   	                         //  2*3 = 6
                  	mul*=num[i][j];                  //  6*4 = 24   
		       }                                     // 24*5 = 120
         }                                           // 120*6 = 720 
         
		printf("Multiplication: %d", mul);             //multiplication: 720
		break;	
				
		case 4:                                      //div_value: {{1,2,3}, {4,5,6}}
			div= 1;
			for(i=0; i<2; i++)  //row                      1 / 1 = 1.0      
         {                                         //    1.0 / 2 = 0.5
         	for(j=0; j<3; j++)  //column                 0.5 / 3 = 0.1666
         	   {                                   // 0.1666 / 4 = 0.041666
                  	div/=num[i][j];                // 0.0416 / 5 = 0.008333
		       }                                   // 0.00833/6 = 0.0013887                                    
         }
		printf("Division: %f", div);               //divide: 0.001389           
		break;
		
		default:
		printf("please enter correct choice..");    //default value for invalid choice
		break;
	}	
}

