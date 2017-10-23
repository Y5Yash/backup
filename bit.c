#include<stdio.h>
int main()
{ int n,k ;
  scanf("%d %d",&n,&k) ;
  int r=n>>k ;
  printf("%d\n",r%2) ;
  return 0 ;
}

