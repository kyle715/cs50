#include <cs50.h>
#include <stdio.h>

    int main(void)
    {
    float n; // what is n representing?  JE
    int coins = 0; // this sounds good JE
        do {
            n = get_float("change due: ");
        } while (n > 1 || n < 0);{ // what is n? JE, why have whaile loop limit to 1.00? can be better JE
            while( n >= .25){
            n = ( n - .25); // what is .25? quater? JE
            coins++;
            } while (n >= .10){ // checks dimes JE
                n = ( n - .10);
                coins++;
            } while ( n >= .05){ // checks nickels JE
                n = (n - .05);
                coins++;
            } while (n > .01 || n == .01){ // checks pennys JE
                n = (n - .01);
                coins++;
            } // while( n = .01){
            //     n = (n - .01);
            //     coins++;
            // }
        printf("%i", coins); // add more text saying what this number is? printf("coins = %i", coins);
        };

    }



    /*
    Code is not fully working JE
    use style50 cash.c to check styling, needs indenting and spacing

    added check50 results below :
    5 sad faces

    check50 cs50/2018/x/cash


:) cash exists
:) cash compiles
:( input of 0.41 yields output of 4
    expected "4\n", not "3"
:( input of 0.01 yields output of 1
    expected "1\n", not "0"
:) input of 0.15 yields output of 2
:( input of 1.6 yields output of 7
    did not find "7\n"
:( input of 23 yields output of 92
    did not find "92\n"
:( input of 4.2 yields output of 18
    timed out while waiting for program to exit
:) rejects a negative input like -.1
:) rejects a non-numeric input of "foo"
:) rejects a non-numeric input of ""

    */