#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jumpHeight, numberPipes, pipeHeightCurrent, pipeHeightLast, sucessNbr = 0;

    scanf("%d %d", &jumpHeight, &numberPipes);

    scanf("%d", &pipeHeightLast);

    for(int i = 1; i < numberPipes; i++)
    {
        scanf("%d", &pipeHeightCurrent);
        if(abs(pipeHeightCurrent - pipeHeightLast) <= jumpHeight)
        {
            sucessNbr++;
        }
        pipeHeightLast = pipeHeightCurrent;
    }
    if(sucessNbr == numberPipes - 1)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}