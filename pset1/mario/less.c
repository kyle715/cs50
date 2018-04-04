#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do {
        n = get_int("How big should the pryamid be?: ");
    } while (n > 23 || n < 0);
        {
        for ( int i = 0; i < n; i++){
            for (int spaces = n - i; spaces > 1; spaces--){
                printf(" ");
            } for ( int hash = 0; hash < i + 2; hash ++){
                printf("#");
            }
            printf("\n");
          };
    };
}
