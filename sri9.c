#include<stdio.h>
void main()
{int i,a,b;
printf("\n enter the range:");
scanf("%d\t%d",&a,&b);
for(i=a;i<=b;i++)
{if(i%2==0)
{
printf("\n%d",i);
}}
getch();
}
