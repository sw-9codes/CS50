#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int min_pop = 9;
    int x;
    do
    {
        x = get_float("Start size: ");
    }
    while (x < min_pop);

    int y;

    do
    {
        y = get_float("End size: ");
    }
    while (y < x);

    int n = 0;
    if (x == y)
    {
        printf("Years: %i\n", n);
    }
    else
    {
        do
        {
            n++;
            x = x + x / 3 - x / 4;
        }
        while (x < y);
        printf("Years: %i\n", n);
    }
}
