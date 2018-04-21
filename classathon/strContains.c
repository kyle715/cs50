#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


 int main(int argc, string argv[])
 {
    string firstString = argv[1];
    string secondString = argv[2];
    int secondlength = strlen(secondString);
    int comp= 0;
    // check arguments
    while(argc != 3)
        {
            printf("Please enter a first and second string");
            return 1;
        }
    //iterate through strings
    for(int i = 0, j = 0; i < strlen(firstString) && j < secondlength; i++)
        {
            // if a letter of the first string is equal to the first letter in the second string add 1 to the variable j
          if (firstString[i] == secondString[0])
            {
              j++;
            // by using j see if the next letter in the first string is equal to the second letter in the second string, J is being used incrementally to make sure
            //if we have the second string "dog" we are only checking the next 2 letters in the first string after d
                  if(firstString[i+j] == secondString[0 +j])
                  {
                      comp++;
                  }
            }
        }
    // if we do not have any matches in the strings simply say the string does not exist
    if(comp == 0)
    {
        printf("the string does not exist\n");
    }
    // if there is a match, simply says the string exists somewhere in the first string
    else if(comp == 1)
    {
        printf("The String exists\n");
    }
    // if there is more than one match throughout the first string, outputs that the string is full of it
    else
    {
        printf("The string is full of the word\n");
    }
 }