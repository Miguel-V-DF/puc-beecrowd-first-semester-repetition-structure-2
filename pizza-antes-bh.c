#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n, d, pessoas, p;
    char datas[11];

    while(scanf("%d%d", &n, &d) != EOF)
    {
        char dataC[11] = "";
        bool found = false;
        for(int i = 0; i < d; i++)
        {
            pessoas = 0;
            scanf("%s", datas);
            for(int j = 0; j < n; j++)
            {
                scanf("%d", &p);
                if(p == 1) pessoas++;
            }
            if((pessoas == n) && found == false)
            {
                strcpy(dataC, datas);
                found = true;
            }
        }
        if(found == true)
        {
            printf("%s\n", dataC);
        }
        else
        {
            printf("Pizza antes de FdI\n");
        }
    }

    return 0;
}