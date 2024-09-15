#include <stdio.h>
#include <string.h>

int main()
{
    int qt, n, m;
    char play1[101], choice1[6], play2[101], choice2[6];

    scanf("%d", &qt);

    for(int i = 0; i < qt; i++)
    {
        scanf("%s %s %s %s", play1, choice1, play2, choice2);
        scanf("%d %d", &n, &m);
        if(strcmp(choice1, "PAR") == 0)
        {
            if((n + m) % 2 == 0)
            {
                printf("%s\n", play1);
            }
            else
            {
                printf("%s\n", play2);
            }
        }
        else
        {
            if((n + m) % 2 == 0)
            {
                printf("%s\n", play2);
            }
            else
            {
                printf("%s\n", play1);
            }
        }
    }

    return 0;
}