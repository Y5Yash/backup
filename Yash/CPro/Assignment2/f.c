#include<stdio.h>
int main ()
{
	int t,i,n,j,k;
	int c,z, temp,st;
	scanf("%d",&t);
	int arr[160];
	arr[0]=1;
	for (i=0;i<t;i++)
	{
		arr[0]=1;
		for (z=1;z<160;z++)
			arr[z]=0;
		scanf("%d",&n);
		for (j=2;j<=n;j++)
		{
			c=0;
                     for(k=0;k<160;k++)
		     {
                         temp=j*arr[k]+c;
			 arr[k]=temp%10;
			 c=temp/10;
		     }
		     
		}
		st=0;
		for(k=159;k>=0;k--)
		{
			if (arr[k]!=0)
			{
				st=1;
			}
			if (st==1)
			printf("%d",arr[k]);
		}
		if (i!=t-1)
		printf("\n");
	}

	return 0;
}
