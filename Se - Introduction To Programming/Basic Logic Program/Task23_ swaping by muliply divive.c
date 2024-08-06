//swap two numbers with using of multiplication and division.
 
#include<stdio.h>
main()
{
int a, b, temp;

printf("A= ");
scanf("%d", &a);

printf("B= ");
scanf("%d", &b);

temp= a/b;
a= a/temp;
b= temp*a;

//printf("\n Temp= %d", temp);

printf(" \nAfter swapping \n A= %d", a);
printf("\n B= %d", b);

}


