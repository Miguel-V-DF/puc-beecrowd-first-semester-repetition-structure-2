#include <stdio.h>

int main()
{
    int n, aMin, aMax, a, perm;

    while(scanf("%d %d %d", &n, &aMin, &aMax) != EOF)
    {
        perm = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if((a >= aMin) && (a <= aMax))
            {
                perm++;
            }
        }
        printf("%d\n", perm);
    }

    return 0;
}