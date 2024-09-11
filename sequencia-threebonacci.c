#include <stdio.h>

int main()
{
    unsigned long long fib1, fib2, temp, remainder;
    int n, counter;
    while (scanf("%d", &n) != EOF)
    {
        fib1 = 1;
        fib2 = 1;
        temp = 0;
        counter = 0;
        if (fib1 % 3 == 0 || fib1 == 3)
        {
            counter++;
        }
        while (counter < n)
        {
            temp = fib2;
            fib2 = fib1;
            fib1 += temp;
            if (fib1 % 3 == 0)
            {
                counter++;
            }
            else
            {
                remainder = fib1;   
                while (remainder > 0)
                {
                    if (remainder % 10 == 3)
                    {
                        counter++;
                        break;
                    }
                    remainder = remainder / 10;
                }
            }
        }
        printf("%llu\n", fib1);
    }
    return 0;
}
