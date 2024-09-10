#include <stdio.h>

int main()
{
    int nbrGrenais = 0, inter, gremio, interV = 0, gremioV = 0, empate = 0;
    
    int choice = 1;
    do
    {
        scanf("%d%d", &inter, &gremio);
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choice);
        if (inter > gremio)
        {
            interV++;
        }
        else
        {
            if(inter < gremio)
            {
                gremioV++;
            }
            else
            {
                empate++;
            }
        }
        nbrGrenais++;
    }
    while(choice == 1);

    printf("%d grenais\n", nbrGrenais);
    printf("Inter:%d\n", interV);
    printf("Gremio:%d\n", gremioV);
    printf("Empates:%d\n", empate);

    if (interV > gremioV)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        if(interV < gremioV)
        {
            printf("Gremio venceu mais\n");
        }
        else
        {
            printf("Nao houve vencedor\n");;
        }
    }

    return 0;
}