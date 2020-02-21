#include<stdio.h>
//Perfect Number Range
int main()
{	
int x,n,rem,sum,i;
for(x=1;x<=1000;x++)
{
	sum=0;
for(i=1;i<=x/2;i++)
{
	if(x%i==0)
	sum=sum+i;	
}
if(x==sum)
printf("%d\n",x);
}
}


	
	
	




