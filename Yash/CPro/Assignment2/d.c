#include<stdio.h>
int main()
{
	long long int t,x,y,m,i,j,k;
	long long int arr[1000000];
	scanf("%d",&t);
	for (k=0;k<t;k++)
	{
		j=1;
		scanf("%lld%lld%lld",&x,&y,&m);
		x=x%m;
		while (y>0)
		{
			if (y%2!=0)
			{
				j=(j*x)%m;
			}
			else;
			x=(x*x)%m;
			y=y/2;
		}
		arr[k]=j;
	}
	for (k=0;k<t;k++)
		printf("%lld ",arr[k]);
	printf("\n");
	return 0;
}
