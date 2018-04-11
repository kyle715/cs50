#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // what is n stand for? JE
    int bottles = 12;
    do {
        n = get_int("minutes: ");
    }
        while (n < 0);
        {
            printf("%i minutes is %i bottles of water used\n",n, n * bottles); // looks fine , I would just specify 12oz bottles JE
        };
}

// style50 needs to be used, needs some indenting JE
// code works , great job