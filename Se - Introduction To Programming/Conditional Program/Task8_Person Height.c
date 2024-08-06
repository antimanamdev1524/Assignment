/* the height of a person in centimeters and categorize the 
person according to their height. */
#include<stdio.h>
main()
{
	int Height;
	printf("To categorize the person according to their height \n\n Enter Height: ");
	scanf("%d", &Height);
	
	//nested if else
	
  if(Height>30 && Height<=305)  //if height is more than 30 & less than 305    
      {
       	if(Height<=90)         
      	    {
      	       printf("The person is small", Height);  //small height (30-90) 	
	    	}
		else        
		   {
		   	   printf("The person has Average height", Height); //Average height (90-305)
		   }
    	
      }
  
  else if(Height>305 && Height<=609) //if the height is more than 305 & less than 609
      {
         if( Height<=457)
		    {
		        printf("The person is large", Height);  //large height (305-457)
			}
		 else
		    {
		        printf("The person has huge height", Height);  //huge height(457-609)	
			}	
	  }
  
   else            //if the height is less than 30
      {
      	 printf("The person is Tiny");  // tiny Height (height<30)
	  }
     
}
 
