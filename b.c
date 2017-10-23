#include<stdio.h>
int main()
{
	int num,dn,rem,b=1;
	printf("num");
	scanf("%d",&num);
	dn=num;
	while (num>0)
	{rem=num%2;
	if (rem==1)
	printf("1");
	else 
	printf("0");
	num=num/2;
	}
return 0;
}
