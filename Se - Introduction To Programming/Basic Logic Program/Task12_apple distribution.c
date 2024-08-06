/* Accept number of students from user. 
I need to give 5 apples to each student. 
How many apples are required? */

#include<stdio.h>
main()
{
	int n, result;
	printf("Number of student: ");
	scanf("%d", &n);
	
	//formula to distribute 5 apple to each student
	result= 5 * n; 
	printf("total required apples= %d", result);
}


