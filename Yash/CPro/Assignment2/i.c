#include<stdio.h>
#include<math.h>
int main()
{
        long long arr[1000001];
        //Find an array of prime nos.
        arr[0]=0;arr[1]=0;arr[2]=2;
        long long pr[1000001];
        pr[0]=2;
        long long np=0,i,st,n;
        for (i=3;i<=1000000;i++)
        {
                st = 1;
                for (n=0;n<=np && n<=sqrt(i);n++)
                {
                        if (i%pr[n]==0)
                        {
                          st = 0;
                          arr[i]=arr[i-1];
                          break;
                        }
                }
                if (st==1)
                {
                        np++;
                        pr[np]=i;
                        arr[i]=i+arr[i-1];
        //              printf("pr-%d",i);
                }
        //      printf("%d ",arr[i]);
        }
//Found an array of Prime nos.
//And an array of nos with either 0 if not prime and no if prime

 long long t,x,y,j,sum,k;
        scanf("%lld",&t);
        for (j=0;j<t;j++)
        {
                sum=0;
                scanf("%lld%lld",&x,&y);
             /* for (k=x;k<=y;k++)
                {
                        sum=sum+arr[k];
                }*/
		sum=arr[y]-arr[x-1];
                printf("%lld\n",sum);

        }


        return 0;
}

