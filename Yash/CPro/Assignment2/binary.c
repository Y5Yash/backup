#include<stdio.h>
int main()
{
	int arr[64];
	int a,b,c,n,m;
	scanf("%d%d",&n,&m);
	for (a=0;a<n;a++)
	{
		scanf("%d",&arr[a]);
	}

	b=n/2;
	c=n/2;
	int st=0;
	while (st!=1 && c!=0)
	{
		c=c/2;
             if (arr[b]==m)
	     {
		    st=1;
		    printf("%d  %d exists\n",st,arr[b]);
	     }
	     else if (arr[b]>m)
		     b=b-c;
	     else
		     b=b+c;
	     //printf("%d\n",c);
	}
	printf("%d",st);

	return 0;
}
