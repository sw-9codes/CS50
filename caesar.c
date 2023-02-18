#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

bool only_digits(string k);
int main(int argc, string argv[])
{

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    only_digits(argv[1]);
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    if (argc == 2)
    {
        string plain = get_string("plaintext: ");
        int length = strlen(plain);
        int key = atoi(argv[1]);
        char cipher[length+1];
        for (int i = 0; i < length; i++)
        {
            if (isupper(plain[i]))
            {
                cipher[i] = (((plain[i] - 'A') + key) % 26) + 'A';
            }
            else if (islower(plain[i]))
            {
                cipher[i] = (((plain[i] - 'a') + key) % 26) + 'a';
            }
            else
            {
                cipher[i] = plain[i];
            }
        }
        cipher[length] = '\0';
        printf("ciphertext: %s\n", cipher);
        return 0;
     }
}

bool only_digits(string k)
{
    for (int i = 0; i < strlen(k); i++)
    {
        if (!isdigit(k[i]))
        {
            return false;
        }
     }
     return true;
}
