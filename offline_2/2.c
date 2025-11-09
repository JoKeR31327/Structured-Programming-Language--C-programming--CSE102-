#include <stdio.h>
int main()
{
    long n1,n2;
    int i,j,sum;
    printf("Enter from: ");
    scanf("%d", &n1);
    printf("Enter  to: ");
    scanf("%d", &n2);
    printf("The Perfect numbers between %d to %d: ", n1,n2);

    for(i=n1; i<=n2; i++)
    {
        sum = 0;

        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum= sum+j;
            }
        }
        if(sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

