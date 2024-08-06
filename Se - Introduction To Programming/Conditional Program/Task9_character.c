//Check Uppercase or Lowercase or Digit or Special Character.

#include<stdio.h>
main()
{
	char ch;  //data member
	printf("Enter Character here: ");
	scanf("%c", &ch);  //user input for character
	
	if(ch>='A' && ch<='Z')  //uppercase condition
	  {
	  	printf(" '%c' is UPPERCASE", ch);
	  }
	else if (ch>='a' && ch<='z')  //lowercase condition
	  {
	  	printf(" '%c' is lowercase", ch);
	  }
	else
	  {
	  	printf(" '%c' is a special character", ch);
	  }
}


