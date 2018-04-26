/**
 * (EMITON)
 * Overall great program
 * Cliff mentioned something about possibly getting a whole number like '1' instead of just '1/2'
 * so you might want to add that update to your duration, but aside from that I like the format.
 **/

// Helper functions for music
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int x = atoi(&fraction[0]);
    int y = atoi(&fraction[2]);
    //(EMITON) very succint, one liners are the best. But it might be a little cryptic
    int eigths = (8/y)*x;
    return eigths;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    float semitone = 0.0, currentOctave;
    //(EMITON) Why did you use the '\0' to initialize the characters?
    //(EMITON) Will affect anything? Is this best practice?
    char currentNote = '\0', accidental = '\0';
    if (strlen(note) == 2)
    {
        currentNote = note[0];
        currentOctave = (float)(note[1] - '0');
    }
    else if (strlen(note) == 3)
    {
        currentNote = note[0];
        accidental = note[1];
        currentOctave = (float)(note[2] - '0');
    }
    else
    {
        return 1;
    }

    //(EMITON) I know that hard numbers are usually looked down upon, but I like the implemnation in your switch statement
    switch (currentNote)
    {
        case 'C':
            semitone -= 9.0;
            break;

        case 'D':
            semitone -= 7.0;
            break;

        case 'E':
            semitone -= 5.0;
            break;

        case 'F':
            semitone -= 4.0;
            break;

        case 'G':
            semitone -= 2.0;
            break;

        case 'A':
            break;

        case 'B':
            semitone += 2.0;
            break;
    }

    //(EMITON) I like how you break down the 'NOA' into three parts
    //(EMITON) First Note, then Accidental, then Octave
    if (accidental == '#')
    {
        semitone += 1.0;

    }
    else if (accidental == 'b')
    {
        semitone -= 1.0;
    }

    //(EMITON) Another one liner, nice!
    semitone += (currentOctave - 4.0) * 12.0;

    return round(pow(2.0, semitone / 12.0) * 440.0);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (strlen(s) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
