#include<stdio.h>
int main()
{
	long long i,n,q,j,k;
	long long a,b,x;
	long long arr[1000001];
	scanf("%lld%lld",&n,&q);
	for (x=0;x<n;x++)
		scanf("%lld",&arr[x]);
	for (a=0;a<q;a++)
	{
		scanf("%lld%lld%lld",&i,&j,&k);
		for (b=i;b<=j;b++)
			arr[b]+=k;
	}
	for (x=0;x<n;x++)
		printf("%lld ",arr[x]);
	return 0;
}
