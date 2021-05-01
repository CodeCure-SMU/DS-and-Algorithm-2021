#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, i, j, k;

    scanf("%d%d", &N, &M);

    int arr[N];
    for(int z = 0; z < N; z++)
        scanf("%d", &arr[z]);

    int sum = 0; int max;
    for(i=1; i<N; i++)
        for(j=i+1; j<N; j++)
            for(k=j+1; k<N; k++)
            {
                sum = arr[i]+arr[j]+arr[k];
                if(sum > max && sum <= M)
                    max = sum;
            }
    printf("%d", max);

    return 0;
}
