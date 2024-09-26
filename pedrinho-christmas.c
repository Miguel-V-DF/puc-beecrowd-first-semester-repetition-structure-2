#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month, day, time;
    int months[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while(scanf("%d %d", &month, &day) !=EOF)
    {
        if(month == 12)
        {
            time = 25 - day;
        }
        else
        {
            time = months[month - 1] - day;
            for(int i = month; i < 11; i++)
            {
                time += months[i];
            }
            time += 25;
        }

        if(time == 0) 
        {
            printf("E natal!\n");
        }
        else
        {
            if(time == 1)
            {
                printf("E vespera de natal!\n");
            }
            else
            {
                if(time < 0)
                {
                    printf("Ja passou!\n");
                }
                else
                {
                    printf("Faltam %d dias para o natal!\n", time);
                }
            }
        }
    }
    return 0;
}