#include <stdio.h>

int main()
{
    int n, v, quorum, counter;

    while(scanf("%d", &n) != EOF)
    {
        counter = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &v);
            if(v == 1)
            {
                counter++;
            }
        }
        if(counter * 3 >= n * 2)
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }

    return 0;
}