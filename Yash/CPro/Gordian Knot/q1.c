#include<stdio.h>

int power(int x,int y)
{
	int ans=1,t;
	for(t=0;t<y;t++)
	{
		ans*=x;
	}
	return ans;

}


int main ()
{
	int i,j,st,cnt=1;
	int arr[600],arb[600];
	arr[0]=2;
	for(i=3;i<580;i=i+2)
	{
		st=0;
		for (j=0;arr[j]*arr[j]<=i;j++)
		{
			if (i%arr[j]==0)
			{
				st=1;
				break;
			}
		}
		if(st==0)
		{
			arr[cnt++]=i;
		}
	}
	int pro=1,pwer,n;
	for (i=0;i<cnt;i++)
	{
		n=337500;
		pwer=0;
		arb[i]=0;
		while(n%arr[i]==0)
		{
			pwer++;
			arb[i]++;
			n=n/arr[i];
		}
		if(arb[i])
		{
			pro*=arb[i];
		}
		printf("%d , %d \n",arr[i],arb[i]);
	}
	printf("\n%d",pro);
	int sum=0,product,k;
	for(i=0;i<2;i++)
	{
		product=power(2,i+1);
		for(j=0;j<3;j++)
		{
			product*=power(3,j+1);
			for(k=0;k<5;k++)
			{
				product*=power(5,k+1);
				sum+=product;
				product=product/power(5,k+1);
			}
			product=product/power(3,j+1);
		}
		product=product/power(2,i+1);
	}
	printf("\n\n%d",sum);
	return 0;
}
