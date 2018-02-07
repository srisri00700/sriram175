#include<stdio.h>
int main()
{
int i,j,a[8],temp,c,m;
printf("enter the array value");
scanf("%d",&m);
printf("enter the elements");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    for(j=i+1;j<m;j++)
    {
      if(a[i]>a[j])
      {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }
  }printf("%d"a[i]);
    }
  }
  return 0;
}
