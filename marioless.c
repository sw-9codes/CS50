#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }

    while ((h < 1) || (h > 8));
    printf("Stored: %i", h);
    for (int i = 0; i < (h + 1); i++)                     //Prints the number of rows
    {
        for (int k = 0; k < (h - i); k++)               //Prints the number of spaces -
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)                  //Prints the number of columns - everytime row i is increased, column j is initialized to 0
        {
            printf("#");
        }
        printf("\n");
    }
}
