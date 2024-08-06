//area of a rectangular prism formula: A=2(wl+hl+hw).

#include<stdio.h>
main()
{
	int l, w, h, area;
	printf("l= "); //length
	scanf("%d", &l);
	
	printf("w= "); //width
	scanf("%d", &w);
	
	printf("h= "); //height
	scanf("%d", &h);
	
	area= 2*((l*w)+(w*h)+(h*l)); //area of rectangular prism
	printf("Area of a rectangular prism: %d", area);
}


