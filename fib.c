#include<stdio.h>
int main()
{ int a[100] , n ;
  printf("How many elements (n>2) : ") ;
  scanf(" %d",&n) ;
  a[1]=1 ;
  a[2]=1 ;
  if(n>2)
  {  for(int i=3;i<=n;i++)
	   a[i]=a[i-1]+a[i-2] ;
     printf("Fibonacci series :  ") ;
     for(int j=1;j<=n;j++)
	   printf("%d ",a[j]) ;
  }
  else printf("\t\tInvalid input!!!") ;
  printf("\n") ;
  return 0 ;
}

