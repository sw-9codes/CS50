#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 1 || h > 8);

    for (int i = 0; i < h; i++)
    {
         for (int j = 0; j < (h - i); j++)
        {
           printf(" ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }

        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        printf("\n");
    }
}
