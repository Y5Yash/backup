#include<stdio.h>
int main()
{
	int numer, denom,remain;
	FILE* in;
	FILE* ou;
	in = fopen("input","r");
	fscanf(in,"%d",&numer);
	fscanf(in,"%d",&denom);
	remain=numer%denom;
	ou=fopen("output","a");
	if(remain==0)
	{
	   fprintf(ou,"The value of %d/%d is %d.\nThe value of remainder is %d.\n The nos. are divisible.\n",numer,denom,numer/denom,remain);
	}
	else
	{
		fprintf(ou,"The value of %d/%d is %d.\nThe value of remainder is %d.\nThe nos. are not divisible.\n",numer,denom,numer/denom,remain);
	}
	fclose(in);
	fclose(ou);
	return 0;
}
