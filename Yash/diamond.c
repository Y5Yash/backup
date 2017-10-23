#include<stdio.h>
int main()
{
	int k, i,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
             for (k=0;k<=n-i;k++)
		   printf(" ");
	     for (k=0;k<=(2*i);k++)
	     {
		     if (k%2==0)
		             printf("*");
		     else
			     printf(" ");
	     }
	   printf("\n");  
	}
	for (i=n-1;i>=0;i--)
        {
             for (k=0;k<=n-i;k++)
                   printf(" ");
             for (k=0;k<=(2*i);k++)
             {
                     if (k%2==0)
                             printf("*");
                     else
                             printf(" ");
             }
           printf("\n");
        }

	return 0;
}
