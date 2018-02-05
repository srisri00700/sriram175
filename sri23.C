#include<stdio.h>
void main()
{
int array[100],n,i,largest;
printf("\n enter the numbers);
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&array[i]);
}
largest=array[0];
for(i=0;i<n;i++)
{
if(largest<array[i])
largest=array[i];
}
printf("\n largest number in the array=%d",largest);
}
