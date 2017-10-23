#include<stdio.h>
float main(float area,float width)
{
	float length;
	
	float perimeter;
	scanf("%f%f",&length, & width);
	scanf("%f",&width);
	printf("%f %f\n",length ,width);
	area=length*width;
	perimeter=2*(length+width);
	printf("Area is %f \nThe perimeter is %f\n",area, perimeter);
return 0;
}
