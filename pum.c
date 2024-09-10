#include <stdio.h>

int main()
{
    int pum;

    scanf("%d", &pum);

    for(int i = 1; i < pum * 4; i+=4)
    {
        for(int j = i; j < i + 3; j++)
        {
            printf("%d ", j);
        }
        printf("PUM\n");
    }

    return 0;
}