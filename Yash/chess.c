#include <stdio.h>
int main()
{
	int r,c, n;
	scanf("%d",&n);
	printf("\n");
        for (r=0;r<n*3;r++)
	{
		for (c=0;c<n*3;c++)
		{
			if (((r/3)+(c/3))%2==0)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nDone\n");

	return 0;
}

