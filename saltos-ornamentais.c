#include <stdio.h>

int main()
{
    int n;
    float gd, nota[7], notaF;
    char nome[20];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        notaF = 0;
        float min = 10, max = 0;
        scanf("%s %f", nome, &gd);
        for(int j = 0; j < 7; j++)
        {
            scanf("%f", &nota[j]);
            notaF += nota[j];
            if(nota[j] < min) min = nota[j];
            if(nota[j] > max) max = nota[j];
        }
        notaF = (notaF - min - max) * gd;
        printf("%s %.2f\n", nome, notaF);
    }

    return 0;
}