#include <stdio.h> //inform compiler to include stdio header file from stdio library for C to get print function
#include <cs50.h>

int main(void) //When start
{
  string name = get_string("What's your name? ");

  printf("hello, %s\n", name);
}
