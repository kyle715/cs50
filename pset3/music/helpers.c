// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
     int x = atoi(&fraction[0]);
    int y = atoi(&fraction[2]);
    int eigths = (8/y)*x;
    return eigths;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    string s = get_string();
        if (s == NULL){
            return true;
        }else {
            return false;
        }
}
