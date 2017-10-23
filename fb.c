#include<stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
        a=0;
	b=1;
  	 printf("%d %d\t",a,b);
	for(int i=0;i<n;i++)
	{
 		c=a+b;

		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}


