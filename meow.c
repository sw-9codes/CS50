#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
    i++;               //adding 1 to the counter at each iteration through the loop
    printf("meow\n");
    }
     for (i = 0; i < 3; i++)
    {
        printf("Shake them haters off! ");
    }
    while (true) // accepts bool - this is an infinite loop so definitely use ctrl+c to stop
    {
        printf("I'm ready to go right now! ");
    }
    while (1) // bool can also be a 0 or 1 - this is an infinite loop so definitely use ctrl+c to stop
    {
        printf("I control my destiny. ")
    }
}

