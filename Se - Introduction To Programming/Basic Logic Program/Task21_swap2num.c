//swap 2 numbers without using 3rd variable 
#include<stdio.h>
main()
{
	int a,b, temp; //data member
	
	printf("1) A= ");
	scanf("%d", &a); //user input for A
	
	printf("  B= ");
	scanf("%d", &b); //user input for B
	
	//swapping 2 numbers without using 3rd variable 
	//a=4 b=6
	a= a+b;  //6+4=10
	b= a-b;  //10-6=4
	a=a-b;   //10-4=6
	printf("\nswapping 2 numbers without using 3rd variable:\n A= %d", a);
	printf("\n B= %d", b); 
	
	///swapping 2 numbers with using 3rd variable 
	printf("\n\n2) A= ");
	scanf("%d", &a); //user input for A
	
	printf("   B= ");
	scanf("%d", &b); //user input for B
      temp=a;
      a=b;
      b=temp;
  	printf("\nswapping 2 numbers with using 3rd variable:\n A= %d", a);
	printf("\n B= %d", b);
}





