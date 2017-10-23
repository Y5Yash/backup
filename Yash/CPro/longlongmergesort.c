#include<stdio.h>
long long int ar[11234];
long long int na[11234];
void merge(long long int l,long long int u,long long int m)
{
	long long int ld,ud,mark;
	for (ld=l,ud=m+1,mark=l;mark<=u;mark++)
	{
		if(ld>m)
		{
			na[mark]=ar[ud];
			ud++;
		}
		else if (ud>u)
		{
			na[mark]=ar[ld];
			ld++;
		}
		else
		{
			if (ar[ld]<ar[ud])
				na[mark]=ar[ld++];
			else
				na[mark]=ar[ud++];
		}
	}
	long long int i;
	for (i=l;i<=u;i++)
	{
		ar[i]=na[i];
	}
}


void split(long long int a,long long int b)
{
	int mid = (a+b)/2;
//	printf("+\n");
	if (a<b)
	{
		split(a,mid);
		split(mid+1,b);
//	merge(a,b,mid);
	}
//	printf("-\n");
	
	merge(a,b,mid);
}
int main ()
{
	long long int n,i;
	scanf("%lld",&n);
//	int ar[1123];
	for (i=0;i<n;i++)
		scanf("%lld",&ar[i]);
	split(0,n-1);
	for (i=0;i<n;i++)
		printf("%lld ",ar[i]);


return 0;
}
