#include <stdio.h>
#include <cs50.h>

  long long factorialize(int num)
    {
        long long factor = 1;

        for(int i = 1; i <= num; i++)
        {
            factor = factor * i;
        }

        return factor;
    }


int main(int argc, string argv[])
{
    int argument = 0;

     if (argc != 2)
    {
        printf("Please enter a command line argument");
    }
    else
    {
        argument = atoi(argv[1]);
    }



    printf("%lli\n", factorialize(argument));
}