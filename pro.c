#include<stdio.h>
int main()
{ int n, k;
  printf("\nEnter any integer and its bit no. : ") ;
  scanf("%u %u",&n,&k) ;
  int x=(1<<k)&n ;
  if(x>0) 
     x=1 ;
  printf("\nBit %d of the no. is %d\n",k,x) ;
  return 0 ;
}
