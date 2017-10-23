#include<stdio.h>  
float add(float,float) ;
float sub(float,float) ;
float mul(float,float) ;
float div(float,float) ;
int main()
{ float a,b,res=0 ;  
  char ch ;
  printf("\nEnter 2 nos. : ") ;
  scanf("%f %f",&a,&b) ;
  printf("\nEnter your mathematical symbol : ") ;
  scanf(" %c",&ch) ;
  switch(ch)
  { case '+' :     res=add(a,b) ;
	         break ;
    case '-' :   	 res=sub(a,b) ;
		 break ;
    case '*' :   	 res=mul(a,b) ;
		 break ;
    case '/' :   	 if(b==0)  
	         printf("\t\tSORRY!!\n\t Cannot divide by 0\n") ;
		 else res=div(a,b) ;
		 break ;
    default  :   printf("\n\t\tSORRY!!\n\tIt is not any operator \n") ;
  }
  printf("\nThe result is  %f\n",res) ;
  return 0;
}
float add(float x,float y)
{ return x+y ; }
float sub(float x,float y)
{ return x-y ; }
float mul(float x,float y)
{ return x*y ; }
float div(float x,float y)
{ return x/y ; }
