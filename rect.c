#include<stdio.h>
#include<math.h>
int main()
{    int l, b, area, peri, s ;
     //  to compute area and perimeter of rectangle 
     printf("Enter length : ") ;
     scanf("%d",&l) ;
     printf("Enter width : ") ;
     scanf("%d",&b) ;
     area=l*b ;
     peri=2*(l+b) ;
     printf("\n\tThe area of rectangle is ") ;
     printf("%d",area) ;
     printf(" sq. units and perimeter is ") ;
     printf("%d",peri) ;
     printf(" units. \n") ;
     return 0;
}
