#include <stdio.h>
#include <cs50.h>

int sumFibs(int num)
    {
        int previous = 0;
        int currentnum = 1;
        int result = 0;

        while(currentnum <= num)
        {
            if(currentnum % 2 != 0)
            {
                result += currentnum;
            }
            currentnum += previous;
            previous = currentnum - previous;
        }
        return result;
    }

int main(int argc, string argv[])
{

    int number = 0;
     if (argc == 2)
    {
        printf("Please enter a command line argument");
    }
    else
    {
        number = atoi(argv[1]);
    }



    printf("%i\n", sumFibs(number));
}