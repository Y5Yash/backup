#include<stdio.h>
int main()
{ int n,k ;
  printf("Enter the number and the the bit no. : ") ;
  scanf("%d %d",&n,&k) ;
  int x=(1<<k)-1 ;
  printf("%d\n",x^n) ;
  return 0 ;
}

