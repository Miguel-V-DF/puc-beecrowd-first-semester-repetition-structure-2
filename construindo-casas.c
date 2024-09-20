#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, area, total, minimum;
    // a e b são medidas da casa, c é o percentual permitido para construção.

    do
    {
        scanf("%d", &a);
        if(a != 0)
        {
            scanf("%d %d", &b, &c);
            area = a * b;
            total = area / (c / 100.0);
            minimum = sqrt(total);
            printf("%d\n", minimum);
        }
    }
    while(a != 0);

    return 0;
}