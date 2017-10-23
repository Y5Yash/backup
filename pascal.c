#include<stdio.h> 
int main()
{  int a[50][50] , k ;
	printf("\n How many rows : ") ;
	scanf(" %d",&k) ;		
	
	for(int i=1;i<=k;i++)
        {  a[i][1]=1 ;
	   a[i][i]=1 ;
	}
	
	for(int x=3;x<=k;x++)   
    	    for(int y=2;y<x;y++)
	         a[x][y]=a[x-1][y-1]+a[x-1][y] ;
        printf("Pascal's triangle : ") ;	
	for(int m=1;m<=k;m++)
	{	printf("\n") ;
		for(int n=1;n<=m;n++) 
		{	if(n==1)  
			for(int p=1;p<=2*k-m;p++)   
				printf(" ") ;
			if(a[m][n]>9)  
				printf(" ") ;
			else 
				printf("  ") ;
			printf("%d",a[m][n]) ;
 	         } 
	}
	printf("\n") ;
   return 0 ;
}
