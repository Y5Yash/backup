#include<stdio.h>
int ar[112345];
int na[112345];
void merge(int l,int u,int m)
{
	int ld,ud,mark;
	for (ld=l,ud=m+1,mark=l;mark<=u;mark++)
	{
		if(ld>m)
		{
			na[mark]=ar[ud];
			ud++;
		}
		else if (ud>u)
		{
			na[mark]=ar[ld];
			ld++;
		}
		else
		{
			if (ar[ld]<ar[ud])
				na[mark]=ar[ld++];
			else
				na[mark]=ar[ud++];
		}
	}
	int i;
	for (i=l;i<=u;i++)
	{
		ar[i]=na[i];
	}
}


void split(int a,int b)
{
	int mid = (a+b)/2;
//	printf("+\n");
	if (a<b)
	{
		split(a,mid);
		split(mid+1,b);
	merge(a,b,mid);
	}
//	printf("-\n");
	
//	merge(a,b,mid);
}
/*#include<stdio.h>
int ar[11234];
int na[11234];
void merge(int l,int u,int m)
{
        int ld,ud,mark;
        for (ld=l,ud=m+1,mark=l;mark<=u;mark++)
        {
                if(ld>m)
                {
                        na[mark]=ar[ud];
                        ud++;
                }
                else if (ud>u)
                {
                        na[mark]=ar[ld];
                        ld++;
                }
                else
                {
                        if (ar[ld]<ar[ud])
                                na[mark]=ar[ld++];
                        else
                                na[mark]=ar[ud++];
                }
        }
        int i;
        for (i=l;i<=u;i++)
        {
                ar[i]=na[i];
        }
}


void split(int a,int b)
{
                                                                                                                                    1,8           Top

*/

int main ()
{
	int n,i,min;
	scanf("%d",&n);
	int br[112345];
	for (i=0;i<n;i++)
		scanf("%d",&ar[i]);
	split(0,n-1);
	for (i=0;i<n;i++)
	printf("%d ",ar[i]);
/*	min=1;
	for (i=1;i<n;i++)
	{
		br[i]=ar[i]-ar[i-1];
		if (br[i]<br[min])
			min=i;
	}
	printf("%d %d",ar[min-1],ar[min]);
*/
return 0;
}
