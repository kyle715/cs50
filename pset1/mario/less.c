#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n; // what does int n stand for? JE
    do {
        n = get_int("How big should the pryamid be?: ");
    } while (n > 23 || n < 0); // good JE
        {
        for ( int i = 0; i < n; i++){ // fine JE, but what does i stand for, needs comment explaning what function does
            for (int spaces = n - i; spaces > 1; spaces--){ // int spaces looks good
                printf(" ");
            } for ( int hash = 0; hash < i + 2; hash ++){ // int hash is readable, need comment what algorithm is doing
                printf("#"); // comment print hash as per algorithm
            }
            printf("\n"); // comment next line
          };
    };
}

// code works fine JE
// use style50 , needs indenting and space removed JE