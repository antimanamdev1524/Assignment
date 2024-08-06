//WAP Find out length of string without using inbuilt function 

#include<stdio.h>
main()
{
	char a[25], len=0;  //initialize length=0;
	int i;
	
	printf("Enter string: ");
	gets(a);  //user input to check string length
	
    for(i=0; a[i]!='\0'; i++)  //loop for string length
      {
      	 len++;  //lenth increament
	  }
	  
	  printf("string length: %d", len);  //result of string length
}



