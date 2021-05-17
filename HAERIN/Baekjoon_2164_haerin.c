#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int num = 3, remain = 2;
    scanf("%d", &n);
    if(n==1)
    {
        printf("1\n");
        return 0;
    }
    else if(n==2)
    {
        printf("2\n");
        return 0;
    }
    else if(n!=1 && n!=2)
        {
            for (int j=1; j<n-2; j++)
            {
                if(num>remain)
                {
                    num+=1;
                    remain+=2;
                }
                else if(num<=remain)
                {
                    num+=1;
                    remain=2;
                }
            }
        }
    printf("%d\n", remain);
    return 0;
}
