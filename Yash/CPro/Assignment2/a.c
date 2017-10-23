#include<stdio.h>
int main()
#define newline printf("\n")
{
	int n,k,j,i,temp,start,smallest,ind=-1;
	scanf("%d%d",&n,&k);
	int arr[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
// SORTING THE ARRAY
	for(start=0;start<n;start++)
	{
		smallest = start;
                for (j=smallest;j<n;j++)
		{
			if (arr[j]<arr[smallest])
			{
				temp = arr[j];
				arr[j]=arr[smallest];
				arr[smallest]=temp;
			}
		}
		if (arr[smallest] > k && ind == -1)
			ind = smallest;
	}
//SORTED THE ARRAY

	int p=1,status = 0,sum,q,r;

	if (arr[ind-1]==k)
		{
			status=1;
			int ans[1]={ind-1};
		}
	else
	{
		for (p=ind-1;p>=0;p--)
		    
	}




/*	for (i=0;i<n;i++)
        {
              printf("%d ",arr[i]);
        }

        newline;
        printf("%d",ind);
*/
	if (status==1)
	{
		printf("Yes\n");

	}
	else
		printf("No");

	return 0;
}
