#include<stdio.h>
int main ()
{
//	int N,k;
//	for  (;N>0;)
//	{
//		
//	}

	unsigned int n,k,d,c,b;
	scanf("%u%u",&n,&k);
        d=1<<k;
        c=~(n^d);
	printf("%u %u",c,n);
return 0;
}
