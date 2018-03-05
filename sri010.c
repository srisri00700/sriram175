#include<stdio.h>
int main()
{
int n,i,sum=0,a[10];
float avg;
printf("\nEnter the value of n:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("\nThe average value is %f:",avg);
return 0;
}
