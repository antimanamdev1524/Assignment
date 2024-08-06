/* 15. Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria: 
Marks in Math's>= 65 and 
Marks in Physics >=55 and 
Marks in Chem>=50 and 
Total in all three subjects>=190 or 
Total in Math's and Physics >=140
 -------------------------------------- 
Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 
Total marks of Math's, Physics and Chemistry: 188 
Total marks of Math's and Physics: 137 
The candidate is not eligible. */

#include<stdio.h>
main()
{
	int maths, physics, chemistry, T1, T2; 
	printf("Enter Marks of following subject to check eligibility for admission \n\nMaths: ");
	scanf("%d", &maths);  //user input for maths
	
	printf("physics: ");
	scanf("%d", &physics); //user input for physics
	
	printf("chemistry: ");
	scanf("%d", &chemistry);  //user input for chemistry
	
	T1= maths + physics;   
	T2= maths + physics + chemistry;
	
	printf("Total marks of Math's and Physics: %d", T1);
	printf("\nTotal in all three subjects: %d", T2);
	
	if(maths>=65 && physics>=55 && chemistry>=50) 
	   {
	   	  if(T1>=140 )   //checking condition for maths & physics Marks
	   	   {
	   	   	   printf("\n\nEligible for admission");
		   }
		   
		   else
		   {
		   	  printf("\n\nNot eligible");
		   }
	   	  
	   }
	else
	   {
	   	  if(T2>=190)   //checking condition for maths, physics & chemistry.
	   	   {
	   	   	  printf("\n\nELigible for admission");		  
		   }
		  else
		   {
		   	  printf("\n\nNot eligible");
		   }
	   }
}


