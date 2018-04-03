#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do {
        n = get_int("How big should the pryamid be?: ");
    } while (n > 23 || n < 0);
    {
        printf("%i", n);
    };
}
