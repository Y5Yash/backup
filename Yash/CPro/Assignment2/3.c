#include<stdio.h>
int main()
{
        long long i,n,q,j,k;
        long long a,b,x;
        long long arr[1000002],ari[1000002],arj[1000012];
        scanf("%lld%lld",&n,&q);
        for (x=0;x<n;x++)
	{       
	       	scanf("%lld",&arr[x]);
		arj[x]=0;
		ari[x]=0;
	}
        for (a=0;a<q;a++)
        {
                scanf("%lld%lld%lld",&i,&j,&k);
		ari[i]+=k;
		arj[j]+=k;
   	}
	for (b=1;b<n;b++)
	{
		ari[b]+=ari[b-1];
		arj[b]+=arj[b-1];
	}
	arr[0]+=ari[0];
	for (x=1;x<n;x++)
	{
                arr[x]+=ari[x]-arj[x-1];
	}
        for (x=0;x<n;x++)
                printf("%lld ",arr[x]);
        return 0;
}    
