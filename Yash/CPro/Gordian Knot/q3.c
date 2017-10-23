#include<stdio.h>
int main()
{
	int i,num=1,j;
	for (i=1;i<10;i++)
	{
		num*=10;
	       if((6*num-24)%39==0)
	       {
		       j=(6*num-24)/39;
		       break;}
	}
	printf("%d",j);
}
