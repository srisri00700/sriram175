#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,largest;
printf("Enter the ten number:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
largest=a[0];
{
for(i=0;i<10;i++)
if(a[i]>largest)
{
largest=a[i];
}
}
printf("largest of ten number is %d",largest);
return 0;
getch();
}
