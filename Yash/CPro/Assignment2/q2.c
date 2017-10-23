#include<stdio.h>
int main ()
{
	long long n,i,j,k;
	long long arr[100001],cont[100001];
	long long sum=0,del,diff;
	
	scanf("%lld",&n);
	
	for (i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	//printf("%lld ",arr[i]);}
	
	arr[n]=arr[n-1];
	
	for (i=0;i<100001;i++)
		cont[i]=0;
	
	cont[arr[0]]=1;
	del=0;
	
	for (i=0;i<n;i++)
	{
		while (cont[arr[del+1]]==0)
		{
			del++;
			cont[arr[del]]++;
		}
		diff=del+1-i;
		sum+=(diff)*(diff+1)/2;
		cont[arr[i]]--;
	}
	printf("%lld\n",sum);
	return 0;
}
