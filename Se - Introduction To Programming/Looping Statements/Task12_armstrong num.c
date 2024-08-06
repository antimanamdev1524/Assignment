//Program of Armstrong Number in C Using For Loop & While Loop. 

#include<stdio.h>
#include<math.h>
main()
{
	int num, original_num, result=0, reminder, i=0, temp, n;
	printf("Enter number: ");
	scanf("%d", &num);
	
	temp=num;
	original_num= num;
	//temp= original_num;
	
	n=0;
    for(temp=num; temp!=0; temp/=10;)
	{
		n++;
	} 
	
	for(temp!=0; temp/=10; n++)
	 {
	 	reminder= temp%10;  //reminder will be used as power
	 	result += pow(reminder, n);  //logic for armstrong number 
	 }
	 
	 if(result==num)
	   {
	   	 printf("%d is an armstrong num: %d", num, result);
	   }
	 else
	   {
	   	  printf("%d is not an armstrong num: %d", num, result);
	   }
}
