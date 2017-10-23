#include<stdio.h>
int main ()
{
	long long int t,n,v;   
	long long int l,i,j,k;   // var for loops
	scanf("%lld",&t);
	long long int arr[1000002],temp;
	for (l=0;l<t;l++)
	{
		scanf("%lld%lld",&n,&v);
		for (j=0;j<n;j++)
		{
			scanf("%lld",&arr[j]);
		}
		for (k=0;k<n-1;k++)
		{
			for (j=0;j<n-1;j++)
			{
				if (arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
		}
		long long int sum =0,st=0;
		if (v<=0)
		{
			printf("0\n");
			st=1;
		}
		for (i=n-1;i>=0;i--)
		{
			sum+=arr[i];
			if (sum>=v && st==0)
			{
				printf("%lld\n",n-i);
				st=1;
				break;
			}
		}
		if (st==0)
			printf("-1\n");
	}
	return 0;
}
