//Vowel or Consonant using switch case

#include<stdio.h>
main()
{
	char letter;
	
	printf("Enter letter: ");
	scanf("%c", &letter);
	
	switch(letter)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':  
			
			printf("\n%c is vowel", letter);
		break;
		
		default:
			printf("%c is consonent", letter);
	}
}


