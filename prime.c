#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}


bool prime(int number)
{
    if(number < 2)                          // if the number is less than 2, don't print
    {
        return false;
    }

    int j;
    for (j = 2; j <= number - 1; j++)      // starting at 2 -> if 2 is less than 100 - 1; add +1
    {
        if(number % j == 0)                 // if the number / has a remainder 
        {
        return false;
        }
    }
    return true;
}
