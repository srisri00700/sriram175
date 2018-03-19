#include <stdio.h>

int main()
{
	int a,i;
	printf("\n enter the numbers");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if(a%i==0)
		a++;
		{
			if(a==2)
		{
			printf("\n is the prime number");
		}
		else
		{
			printf("\n is not a prime number");
		}}
	}
	return 0;
  getch();
}
