#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, i, j;

    scanf("%d", &T);

    int arr[T][2];
    int sum[T];

    for(i = 0; i < T; i++)
        sum [i] = 0;

    for(i = 0; i < T; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &arr[i][j]);

    for(i = 0; i < T; i++)
        for(int j = 0; j < 2; j++)
            sum[i] = sum[i] + arr[i][j];

    for(i = 0; i < T; i++)
        printf("%d\n", sum[i]);

    return 0;
}
