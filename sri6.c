#include <stdio.h>
int main()
{
    int n, i, flag = 2;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
