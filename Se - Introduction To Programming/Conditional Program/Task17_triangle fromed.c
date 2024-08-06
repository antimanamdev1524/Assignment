//check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>
main()
{
	int n1, n2, n3, Triangle; //angle
	printf("Enter angles: \n\nn1= ");
	scanf("%d", &n1);  //user input for angle n1
	
	printf("n2= ");
	scanf("%d", &n2); //user input for angle n2
	
	printf("n3= ");
	scanf("%d", &n3); //user input for angle n3
	
	Triangle= 180;  
	Triangle= n1+n2+n3;
	
	if(Triangle==180)  //condition to form a triangle
	 {
	 	printf("Triangle can be formed because %d+%d+%d= 180", n1, n2, n3);
	 }
	else
	 {
	 	printf("Triangle can't be formed");
	 }
}




