#include<stdio.h>
int main()
{
	int n,i,a[2000010],k;
	scanf("%d",&n);
	for (i=0;i<2000010;i++)
		a[i]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		a[k+1000001]++;
	}
	int count=0;
	for (i=0;i<2000010;i++)
	{
		if (a[i]>1)
			count++;
	}
	printf("%d",count);
	return 0;
}
