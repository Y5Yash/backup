#include<stdio.h>
//int ar[112345];
//int na[112345];
void merge(int l,int u,int m,int ar[])
{
	int na[112345];
	int ld,ud,mark;
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
	int i;
	for (i=l;i<=u;i++)
	{
		ar[i]=na[i];
	}
}


void split(int a,int b,int ar[])
{
	int mid = (a+b)/2;
//	printf("+\n");
	if (a<b)
	{
		split(a,mid,ar);
		split(mid+1,b,ar);
//	merge(a,b,mid);
	}
//	printf("-\n");
	
	merge(a,b,mid,ar);
}
int main ()
{
	int n,i;
	scanf("%d",&n);
	int ar[112345];
	for (i=0;i<n;i++)
		scanf("%d",&ar[i]);
	split(0,n-1,ar);
	for (i=0;i<n;i++)
		printf("%d ",ar[i]);


return 0;
}
