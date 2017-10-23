#include<stdio.h>
int main ()
{
        int b3,input;
	scanf("%d",&input);
	b3 = input%8;
	if (b3<4)
		printf("0");
	else
		printf("1");
        
	return 0;
}
