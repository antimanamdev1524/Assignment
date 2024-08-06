//8. Write a program in C to count the total number of vowels or consonants in a string. 

#include<stdio.h>
main()
{
	char letter[25];
	int vowel_count=0, consonent_count=0, i;
	
	printf("string: ");
	gets(letter);  //string inout from user
	
	for(i=0; letter[i]!='\0'; i++)
     if(isalpha(letter[i]))    //make sure that user input is alphabatical
     {
	  {
     	if(letter[i]=='a' || letter[i]=='e' || letter[i]=='i' || letter[i]=='o' || letter[i]=='u')
	       {
	  	      vowel_count++;  //total vowel counting
	       }
	    else
	       {
	         	consonent_count++;  //total consonent counting
	       }
      }
    }
     
	  printf("Vowel: %d", vowel_count);
	  printf("Consonent: %d", consonent_count);
}



