
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("\nEnter the two elements:");
scanf("%d %d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("\nThe swapped values are:%d %d",a,b);
return 0;
  getch();
}

