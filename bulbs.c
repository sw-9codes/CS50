#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{

    string message = get_string("MESSAGE: ");

    int length = strlen(message);

    int ascii_values[length];

    int binary_number[length][BITS_IN_BYTE];

    for (int i = 0; i < length; i++)
    {
        ascii_values[i] = (int) message[i];

        int value = ascii_values[i];

        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            binary_number[i][j] = value % 2;
            value /= 2;
        }
    }

    for (int k = 0; k < length; k++)
    {
          for (int l = BITS_IN_BYTE-1; l >= 0; l--)
        {
            int final = binary_number[k][l];
            print_bulb(final);
        }
        printf("\n");
     }
    return 0;
}

void print_bulb(int bit)
{
    // Use a ternary operator to determine which emoji to print
    printf(bit == 0 ? "\U000026AB" : "\U0001F7E1");
}
