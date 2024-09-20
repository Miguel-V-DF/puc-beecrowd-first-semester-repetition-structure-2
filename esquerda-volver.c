#include <stdio.h>

int main()
{
    int n = 99;

    do
    {
        scanf("%d", &n);
        if(n != 0)
        {
            char commands[n+1];
            scanf("%s", commands);
            int direction = 1;

            for(int i = 0; i < n; i++)
            {
                if(commands[i] == 'D')
                {
                    direction++;
                }
                else
                {
                    direction--;
                }

                if(direction > 4)
                {
                    direction = 1;
                }
                else
                {
                    if(direction < 1)
                    {
                        direction = 4;
                    }
                }
            }
            if(direction == 1) printf("N\n");
            if(direction == 2) printf("L\n");
            if(direction == 3) printf("S\n");
            if(direction == 4) printf("O\n");
        }
    }
    while (n !=0);

    return 0;
}