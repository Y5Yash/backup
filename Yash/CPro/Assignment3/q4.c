#include<stdio.h>
int main()
{
	int n,i,st=1,cnt=0;char j;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf(" %c",&j);
		if (j=='(')
			cnt++;
		else
			cnt--;
		if (cnt<0)
		{
			st=0;
			printf("NO");
			break;
		}
	}
	if(st)
	{
		printf("YES");
	}
}
