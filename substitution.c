#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

const int keyreq = 26;
bool checkdigit(string k);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key");
        return 1;
    }

    int lengthkey = strlen(argv[1]);

    if (lengthkey != keyreq)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    if (checkdigit(argv[1]) == false)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (argc == 2)
    {
        string plain = get_string("plaintext: ");
        int key[keyreq];
        int plainlength = strlen(plain);
        char cipher[plainlength + 1];

        for (int i = 0; i < keyreq; i++)
        {
            key[i] = toupper(argv[1][i] - 'A');
        }

        for (int i =0; i < plainlength; i++)
        {
            if (isupper(plain[i]))
            {
                cipher[i] = toupper(argv[1][plain[i] - 'A']);
            }
            else if (islower(plain[i]))
            {
                cipher[i] = tolower(argv[1][plain[i] - 'a']);
            }
            else
            {
                cipher[i] = plain[i];
            }
        }
        cipher[plainlength] = '\0';
        printf("ciphertext: %s\n", cipher);
    }
    return 0;
}


bool checkdigit(string k)
{
    for (int i = 0; i < keyreq; i++)
    {
        if (!isalpha(k[i]))
        {
            return false;
        }

        for (int l = i+1; l < keyreq; l++)
        {
            if (k[i] == k[l])
            {
                return false;
            }
        }

    }
    return true;
}
