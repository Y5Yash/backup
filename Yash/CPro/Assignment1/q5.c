#include<stdio.h>
int main()
{
	long long int n,i;
	int k=0;
	scanf("%lld",&n);
//	if(n<1024 && n>0)
//	{
		for (;n > 0;)
		{
                     if (n%2==1)
		     {
			 k++;
		     }
	             n/=2;
		}
//	}
//	else 
//	{
//		printf("Please put in valid values!!");
//	}
        printf("%d",k);	

	return 0;
}
