#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // declaring variables
    bool keySuccessful = false;
    int key = 0;
    string plainText;
    // making sure the command line input is 2
    do
    {
        if (argc != 2)
        {
            printf("Please check input and re-run program\n");
            exit(1);
        }
        // changing string input to an interger
        else
        {
            key = atoi(argv[1]);
            keySuccessful = true;
        }
    }
    // if input is correct prompt user for input
    while (!keySuccessful);
    {
        plainText = get_string("Please enter text to be encrypted:");
        int n = strlen(plainText);
        printf("ciphertext: ");
        for (int i = 0; i < n; i++)
        {
            //if character is an expression such as ! or , leave it be and print as soo
            if (!isalpha(plainText[i]))
            {
                printf("%c", plainText[i]);
            }
            // checking to see if character is lower case and making the character index loop if it exceeds 'z' using values from ascii chart
            if (islower(plainText[i]))
            {
                if ((plainText[i] + key) > 122)
                {
                    printf("%c", (plainText[i] - 26 + key));
                }
                else
                {
                    printf("%c", (plainText[i] + key));
                }
            }
            if (isupper(plainText[i]))
            {
                if ((plainText[i] + key) > 90)
                {
                    printf("%c", (plainText[i] - 26 + key));
                }
                else
                {
                    printf("%c", (plainText[i] + key));
                }
            }
        }
    }
    printf("\n");
}