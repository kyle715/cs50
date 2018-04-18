#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int isPrime(int num)
{
 for(int i = 2; i < num; i++)
 {
     if(num % i == 0)
     {
         return false;
     }
 }
 return true;
}

int sumPrimes(int num)
{
   int sum = 0;
   for(int i = 2; i <= num; i++)
   {
       if(isPrime(i))
       {
           sum += i;
       }
   }
   return sum;
}

int main(int argc, string argv[])
{
    while(argc != 2)
    {
        printf("Please enter a command line argument");
        return 1;

    }

    printf("%i\n", sumPrimes(atoi(argv[1])));
}