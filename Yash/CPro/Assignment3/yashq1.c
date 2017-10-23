#include<stdio.h>
#define p(x) printf("%c",x)
#define nl printf("\n")
int main ()
{
	int a[100001],b[100001],c[100001];
	int n,i;
	int ans[100001];

	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
        {
                scanf("%d",&b[i]);
        }
	for (i=0;i<n;i++)
        {
                scanf("%d",&c[i]);
        }
	for (i=0;i<n;i++)
	{
		if (a[i]+b[i]<=c[i] || a[i]+c[i]<=b[i] || c[i]+b[i]<=a[i])
		{
			p('N');p('o');nl;
		}
		else
		{
			p('Y');p('e');p('s');nl;
		}
	}
}
