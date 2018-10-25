#include <stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("Factorial of a negative number doesn't exist");

    else
    {
        for(int i=1; i<=n; ++i)
        {
            factorial=factorial*i;              
        }
        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}
