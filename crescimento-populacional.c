#include <stdio.h>

int main()
{
    int pa, pb, t, counter;
    double g1, g2;

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d%d%lf%lf", &pa, &pb, &g1, &g2);
        counter = 0;
        do
        {
            pb = pb + pb * (g2 / 100);
            pa = pa + pa * (g1 / 100);
            counter++;
        }
        while((pa <= pb) && (counter <= 100));

        if(counter <= 100)
        {
            printf("%d anos.\n", counter);
        }
        else
        {
            printf("Mais de 1 seculo.\n");
        }
    }

    return 0;
}