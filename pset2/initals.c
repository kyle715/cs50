#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    string s = get_string("Your Name:");
    printf("%c", toupper(s[0]));
   for(int i = 0, n = strlen(s); i < n; i++) { // Good, simple code. More spacing could be used for better legibility. -MD
       if(s[i] == ' ' && s[i+1] != '\0') { // Good idea to drop down curly braces to the next line in C as well. -MD
        printf("%c", toupper(s[i + 1]));
        i++;
       }
   }
   printf("\n");
}
