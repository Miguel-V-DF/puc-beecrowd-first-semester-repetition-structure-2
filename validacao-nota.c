#include <stdio.h>

int main()
{
    int validGrade = 0;
    float nota, average = 0;

    do
    {
        scanf("%f", &nota);
        if(nota >= 0 && nota <= 10)
        {
            average += nota;
            validGrade++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    while(validGrade < 2);

    average = average / 2;

    printf("media = %.2f\n", average);

    return 0;
}