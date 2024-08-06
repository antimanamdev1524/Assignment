//WAP to show difference between Structure and Union.
#include<stdio.h>
struct mystruct
{
	 int a;
	 int b;
} s1; //all variable can be defined into single struct
union myunion
{
	int x;
	int y;
	
}p1,p2; //each variable is declared by its own union

main()
{
	printf("Enter number: ");
	scanf("%d", &s1.a);  
	
	printf("Enter number: ");
	scanf("%d", &s1.b);
	
	  printf("Enter number: ");
	scanf("%d", &p1.x);
	
	printf("Enter number: ");
	scanf("%d", &p2.y);	
}


