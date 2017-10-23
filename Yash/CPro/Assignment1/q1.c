#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int x, c;
	int k, f;
	x=scanf("%d",&c);
//	if (c < -273)
//		printf("Please enter valid input");
//	else
//	{
		x=x/1;
		f=((c*9)+160)/5;
                k=abs(((c*9)%5)*2);
        	printf("%d degrees Celsius is %d.%d degrees Fahrenheit",c,f,k);
//	}

	return 0;
}
