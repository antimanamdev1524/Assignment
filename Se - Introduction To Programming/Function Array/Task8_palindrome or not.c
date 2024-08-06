// WAP to reverse a string and check that the string is palindrome or not 

#include<stdio.h>
main()
{
char a[25], b[25], i,j;  

printf("string_1: ");
gets(a);  //string1 user input

strcpy(b, a);   //copy of  string_1 into string_2
printf("string_2: %s (copy of string_1)\n\n", b);  

strrev(b);    //reverse the character of string_2
printf("reverse of string_2: %s", b);

//compare the string_1 & string_2 (by ascii value not by length)
    if(strcmp(a,b)==0)      
        {
   	         printf("\n\n%s  is palindrom", a);
        }
    else
       {
       	   printf("\n\n%s is not palindrom", a);
	   }
}


