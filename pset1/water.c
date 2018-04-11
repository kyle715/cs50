#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int bottles = 12;
    do {
        n = get_int("minutes: ");
    }
        while (n < 0);
        {
            printf("%i minutes is %i bottles of water used\n",n, n * bottles);
        };
        printf("how interesting")
}