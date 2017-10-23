#include<stdio.h>
int main ()
{

	long long int i,j,h,max=0,n,a[100000],b[100000],flag;
	
	    long long int sum=0;

	scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{	scanf("%lld",&a[i]);
		//	if(a[i]>max)
		//	max=a[i];
		}
		a[n+1]=a[n];
		b[a[1]]=1;
		j=1;

		for(i=1;i<=n;i++)
			{	
				while(b[a[j+1]]==0)
				{	j++;
					b[a[j]]=b[a[j]]+1;
				}
				sum=sum+(j-i+1)*(j-i+2)/2;
				b[a[i]]--;	
			}
		printf("%lld\n",sum);
	return 0;
}
