#include<stdio.h>
int main()
{
	float a,b,c,sum,product;
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	product = a*b*c ;
	printf("%.2f\n%.2f",sum,product);

	return 0;
}
