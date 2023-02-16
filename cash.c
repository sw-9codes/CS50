#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    if (cents / 25 > 0)
    {
        quarters = cents / 25;
        cents = cents - quarters * 25;
    }
    return quarters;
    return cents;
}

int calculate_dimes(int cents)
{
    int dimes = 0;
    if (cents / 10 > 0)
    {
        dimes = cents / 10;
        cents = cents - dimes * 10;
    }
    return dimes;
    return cents;
}

int calculate_nickels(int cents)
{
    int nickles = 0;
    if (cents / 5 > 0)
    {
        nickles = cents / 5;
        cents = cents - nickles * 5;
    }
    return nickles;
    return cents;
}

int calculate_pennies(int cents)
{
    int pennies = 0;
    if (cents / 1 > 0)
    {
        pennies = cents / 1;
        cents = cents - pennies * 1;
    }
    return pennies;
    return cents;
}
