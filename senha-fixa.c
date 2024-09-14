#include <stdio.h>

int main()
{
    int tent, senha = 2002;

    while(tent != senha)
    {
        scanf("%d", &tent);
        if(tent != senha)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
        }
    }

    return 0;
}