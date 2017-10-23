#include<stdio.h>
int main ()
{
	int i,n,j;
	int a[100001],b[100001];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);     
		b[i]=0;
		
		for (j=0;j<i;j++)     
		{
			if (a[j]==a[i]) 
			{
				b[j]++;
				break;
			}
		}
	}
	int count=0;
	for (i=0;i<n;i++)
	{
		if (b[i])
			count++;
	}
	printf("%d",count);
	return 0;
}
