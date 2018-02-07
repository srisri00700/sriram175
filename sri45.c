#include<stdio.h>
void main()
{
int array[100],i,largest,size,j,temp;
printf("\n enter the size");
scanf("%d",&size);
for(i=0;i<size;i++)
{
scanf("%d",&array[i]);
}
largest=array[0];
for(i=0;i<size;i++)
{
if(largest<array[i])
{   largest=array[i];
}
