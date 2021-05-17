#include <stdio.h>
#include <stdlib.h>

void josae()
{
    int N, M;
    int i, j;
    int arr1[5001] = { 0 };
    int cnt;
    j = 1;
    scanf("%d %d", &N, &M);
    printf("<");
    for (i = 0;i < N;i++)
    {
        cnt = 0;
        while (1)
        {
            if (arr1[j] == 0)
                cnt++;
            if (cnt == M)
            {
                arr1[j] = -1;
                if (i == N - 1)
                    printf("%d>",j);
                else
                printf("%d, ", j);
                break;
            }
            j++;
            if (j > N)
                j = 1;
        }

    }
}
int main()
{
    josae();
}
