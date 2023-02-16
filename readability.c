#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string textInput = get_string("Text: ");

    float a = count_letters(textInput);

    float b = count_words(textInput);

    float c = count_sentences(textInput);

    float L = a / b * 100;
    float S = c / b * 100;
    float index = (0.0588 * L) - (0.296 * S) - 15.8;
    int grade = round(index);                               //Use round function instead of ceil function to avoid rounding up unnecessarily. The round() function just rounds to the closest whole number

    if (grade >= 1 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
}

int count_letters(string text)
{
    int length = 0;
    for (int i = 0; i <strlen(text); i++)
    {
        if (isupper(text[i]) || islower(text[i]))
        {
            length++;
        }
    }
    return length;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0; i < strlen(text); i++)     // This iterates through string
    {
        if (text[i] == ' ')   // Counts the number of spaces
        {
             words++;
        }
    }
    return words + 1;   // Adding 1 accounts for no spaces. This problem allows for the assumption that at least one actual word is retrieved from user.
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)     //this iterates through string
    {
        if (text[i] == '?' || text[i] == '!' || text[i] == '.')                // counts the number of punctuation (does not exclude  repeats "...","!!", "???")
        {
             sentences++;
        }
    }
    return sentences;
}


// printf("Text: %s\n", textInput);
