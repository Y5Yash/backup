#include<stdio.h>
int main()
{
	int n,k,sum,q,arr[25];
	int i,j;	                      //loop variables

	scanf("%d%d",&n,&k);
	for (i=0;i<n;i++)                     //accepting the elements...
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<(1<<n);i++)
	{
		sum=0;
		for (j=0;j<n;j++)
		{
			q=i&(1<<j);
			if(q!=0)
			{	sum+=arr[j];}
		}
		if (sum==k){
			printf("Yes\n");
			return 0;}
			else;
		}
	
	printf("No\n");

return 0;
}
