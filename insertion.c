#include<stdio.h>
int insertion(int a[],int n)
{
	int i,j,temp,count;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		count=0;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)
			{
				a[j+1]=a[j];
			}
			else
			{
				a[j+1]=temp;
				count++;
			}
		}
		if(count==0)
			a[0]=temp;
	}
}
int main()
{
	int n,i;
	printf("Number of elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	insertion(a,n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");	
	return 0;
}
