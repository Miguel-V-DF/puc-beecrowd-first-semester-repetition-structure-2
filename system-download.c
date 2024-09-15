#include <stdio.h>

int main()
{
    int c, x, y;

    scanf("%d", &c);

    for(int i = 0; i < c; i++)
    {
        scanf("%d%d", &x, &y);
        if(x + y == 0) printf("PROXYCITY\n");
        if(x + y == 1) printf("P.Y.N.G.\n");
        if(x + y == 2) printf("DNSUEY!\n");
        if(x + y == 3) printf("SERVERS\n");
        if(x + y == 4) printf("HOST!\n");
        if(x + y == 5) printf("CRIPTONIZE\n");
        if(x + y == 6) printf("OFFLINE DAY\n");
        if(x + y == 7) printf("SALT\n");
        if(x + y == 8) printf("ANSWER!\n");
        if(x + y == 9) printf("RAR?\n");
        if(x + y == 10) printf("WIFI ANTENNAS\n");
    }

    return 0;
}