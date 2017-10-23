#include<stdio.h>
int main()
{ float num,sq=1 ;
  printf("Enter num. : ") ;
  scanf("%f",&num) ;
  while(sq*sq<num)
	  sq++ ;
  sq-=1 ;
  for(int i=0;i<3;i++)
	  sq=(sq+(num/sq))/2 ;
  printf("\nSQRT is :  %f\n",sq) ;
  return 0 ;
}
