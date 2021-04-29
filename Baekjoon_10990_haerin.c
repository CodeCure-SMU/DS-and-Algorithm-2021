#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i =1; i<=n-1; ++i)
        printf(" ");
    printf("*\n");

    for(int i =2; i<=n; i++)
    {
        for(int j = 1; j<=n-i; ++j)
        {
            printf(" ");
        }
        printf("*");
        for(int j = 1; j<=(i-1)*2-1; ++j)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}
