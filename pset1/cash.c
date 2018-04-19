#include <cs50.h>
#include <stdio.h>

int main(void)
{
float n;
int coins = 0;
        do
        {

            n = get_float("change due: ");

        } while (n > 100 || n < 0);{

            while( n >= .25){
                n = ( n - .25);
                coins++;
            }
            while (n >= .10){
                n = ( n - .10);
                coins++;
            }
            while ( n >= .05){
                n = (n - .05);
                coins++;
            }
            while (n > .01 || n == .01){
                n = (n - .01);
                coins++;
            } // while( n = .01){
            //     n = (n - .01);
            //     coins++;
            // }
        printf("%i", coins);
        };

    }