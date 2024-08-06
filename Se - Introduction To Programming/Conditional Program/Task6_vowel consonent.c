//Character Is Vowel or Not

#include<stdio.h>
main()
{
	char letter;  //data member
	
	printf("To check the letter Vowel or consonent \n Enter a letter here: ");
	scanf("%c", &letter); //user input for letter
	
	if(letter=='a' || letter=='e' || letter=='i' || letter== 'o' || letter=='u')
	 {
	 	printf("%c is vowel", letter);  
	 }
	
	else
	 {
	 	printf("%c is consonent", letter);
	 }
}


