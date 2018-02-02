#include<stdio.h>
int main()
{
int digit,a,b,i,sum,num;
printf("Enter the two num");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
	sum=0;
	num=i;
while(num!=0)
{
num=num/10;
}
if(sum==i)
{
printf("the num is%d",i);
}
}
return 0;
}
