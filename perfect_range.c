#include<stdio.h>
//Perfect Number Range
int main()
{	
int x,rem,sum,i,n;
	printf("Enter the upper limit:");
	scanf("%d",&n);
for(x=1;x<=n;x++)
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
