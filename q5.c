#include<stdio.h>
int main ()
{
	long long int t,n,v;   
	long long int l,i,j,k;   // var for loops
	scanf("%lld",&t);
	long long int arr[100002],temp;
	for (l=0;l<t;l++)
	{
		scanf("%lld%lld",&n,&v);
		for (j=0;j<n;j++)
		{
			scanf("%lld",&arr[j]);
		}
		for (k=0;k<n-1;k++)
		{
			for (j=0;j<n-1-k;j++)
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
		for (i=n-1;i>=0;i--)
		{
			if (sum>=v)
			{
				printf("%lld",n-1-i);
				st=1;
				break;
			}
			sum+=arr[i];
		}
		if (sum>=v)
		{
			printf("%lld",n);
			st=1;
		}
		if (st==0)
			printf("-1");
	}
	return 0;
}
