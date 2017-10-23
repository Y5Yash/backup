#include<stdio.h>
int main()
{
     int arr[20]={1,3,5,6,7,11,16,32,34,36,41,43,44,44,44,51,52,54,55,60};
     int st=0,n=10,on,i,m,c=10;
     scanf("%d",&m);
     while (st==0 && c>0)
     {
	  c/2;
          if(arr[n]<m)
	  {
		  n=n+c;
	  }
	  else if(arr[n]==m)
	  {
                  st=1;
		  printf("yo");
	  }
	  else
		  n=n-c;
     }
     
    
	     printf("%d\n",st);
     

}
