#include<stdio.h>
#include<math.h>
int main()
{
	long i,j;         //index for loops
	long max=0,np;       //max and counters
	long t,n,m;  	//accepting from user
        
	int st;

	scanf("%ld",&t);
	long arr[100000],pr[100000];  //arrays
	for (i=0;i<t;i++)
	{
		scanf("%ld%ld",&n,&m);
		arr[2*i]=n;
		arr[2*i+1]=m;
                if (max<m)
			max=m;
	}
	pr[0]=2;np=0;
        for (i=2;i<max;i++)
	{
	    st=1;
	    for (n=0;pr[n]<=sqrt(i) && n<np ; n++)
	    {
		    if (i%pr[n]==0)
		    {
			    st=0;
			    break;
		    }
	    }
	    if (st==1)
	    {
		    np++;
		    pr[np]=i;
	//	    printf("%ld)%ld \n",np,i);
	    }
	}


	//Found all the prime no.
	
	long c,b,d,sum;


	for (i=0;i<t;i++)
	{
		sum = 0;
		st =0;
		b=np/2;
		d=np/2;
		c=np/2;
             for (n=arr[2*i];st!=1 && c!=0;n++)
	     {
		     c=c/2;
		     if (n==pr[b])
		     {       st =1 ;     }
		     else if (n<pr[b])
			     b=b-c;
		     else
			     b=b+c;
	     }
	     for (n=arr[2*i];st!=1 && c!=0;n++)
             {
		     c=c/2;
                     if (n==pr[d])
                     {       st =1 ;     }
                     else if (n<pr[d])
                             d=d-c;
                     else
                             d=d+c;
             }
	     for (j=b;j<=d;j++)
	     {
		     sum+=pr[j];
	     }
	     printf("%ld",sum);


	}

	return 0;
}
