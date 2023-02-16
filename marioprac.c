#include <stdio.h>
#include <cs50.h>

int get_size(void)
{
    int n;
    do
    {
         n = get_int("Size: ");
    }
    while (n<1);
    return n;
}

void print_grid(n)
{
    for (int i = 0; i < n; i++) //width of box
    {
        for (int j = 0; j < n; j++) //length of box
        {
             printf("#");
        }
        printf("\n");
    }
}

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_width(void)
{
    int w;
    do
    {
       w = get_int("How wide should the pyramid be? ");
       printf("Stored: %i\n", w);
    }
    while ((w < 1) || (w > 8));
    return w;
}
