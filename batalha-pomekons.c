#include <stdio.h>

int main()
{
    int t, b, ai1, di1, li1, ai2, di2, li2, v1, v2;
    
    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &b);
        scanf("%d%d%d", &ai1, &di1, &li1);
        scanf("%d%d%d", &ai2, &di2, &li2);
        v1 = (ai1 + di1) / 2;
        v2 = (ai2 + di2) / 2;
        if(li1 % 2 == 0)
        {
            v1 += b;
        }
        if(li2 % 2 == 0)
        {
            v2 += b;
        }
        if(v1 > v2)
        {
            printf("Dabriel\n");
        }
        else
        {
            if(v1 < v2)
            {
                printf("Guarte\n");
            }
            else
            {
                printf("Empate\n");                
            }
        }
    }
    return 0;
}