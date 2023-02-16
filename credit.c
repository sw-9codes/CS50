#include <cs50.h>
#include <stdio.h>

//Some cards don't register as valid because I didn't use counter for digits to determine what kind of card it is.
//I used just the starting mumber rule and Luhn's.
// How can I fix this without changing all this code?

int main(void)
{
    long n;
    do
    {
        n = get_long("Number: ");     // Records credit card number
    }
    while (n < 1000000000000 || n > 9999999999999999);        // Checks if numbers is AT LEAST 13 digits & less than 17 digits


//calculating card number with modulus

    long a = ((n % 10000000000000000) / 1000000000000000);
    long b = ((n % 1000000000000000) / 100000000000000);
    long c = ((n % 100000000000000) / 10000000000000);
    long d = ((n % 10000000000000) / 1000000000000);
    long e = ((n % 1000000000000) / 100000000000);
    long f = ((n % 100000000000) / 10000000000);
    long g = ((n % 10000000000) / 1000000000);
    long h = ((n % 1000000000) / 100000000);
    long i = ((n % 100000000) / 10000000);
    long j = ((n % 10000000) / 1000000);
    long k = ((n % 1000000) / 100000);
    long l = ((n % 100000) / 10000);
    long m = ((n % 10000) / 1000);
    long ene = ((n % 1000) / 100);
    long o = ((n % 100) / 10);
    long p = ((n % 10) / 1);

    // multiply odd numbers by 2
    long q = a * 2;
    long r = c * 2;
    long s = e * 2;
    long t = g * 2;
    long u = i * 2;
    long v = k * 2;
    long w = m * 2;
    long x = o * 2;

    //process odd products

    long qq;
    if (q < 10)
    {
            qq = ((q % 10) + ((q % 100)/10));
    }
    else if (q > 10)
        {
            qq = (q % 10) + 1;
        }
    else if (q == 10)
        {
            qq = 1;
        }
        else
        {
            qq = q;
        }

    long rr;
    if (r < 10)
        {
             rr = ((r % 10) + ((r % 100) / 10));
        }
        else if (r > 10)
            {
                rr = (r % 10) + 1;
            }
        else if (r == 10)
            {
                rr = 1;
            }
        else
            {
                rr = r;
            }

    long ss;
    if (s < 10)
        {
             ss = ((s % 10) + ((s % 100) / 10));
        }
        else if (s > 10)
            {
                ss = (s % 10) + 1;
            }
        else if (s == 10)
            {
                ss = 1;
            }
        else
            {
                ss = s;
            }

    long tt;
     if (t < 10)
        {
            tt = ((t % 10) + ((t % 100) / 10));
        }
        else if (t > 10)
            {
                tt = (t % 10) + 1;
            }
        else if (t == 10)
            {
                tt = 1;
            }
        else
            {
                tt = t;
            }

    long uu;
     if (u < 10)
        {
             uu = ((u % 10) + ((u % 100) / 10));
        }
        else if (u > 10)
            {
                uu = (u % 10) + 1;
            }
        else if (u == 10)
            {
                uu = 1;
            }
        else
            {
                uu = u;
            }

    long vv;
     if (v < 10)
        {
             vv = ((v % 10) + ((v % 100) / 10));
        }
        else if (v > 10)
            {
                vv = (v % 10) + 1;
            }
        else if (v == 10)
            {
                vv = 1;
            }
        else
            {
                vv = v;
            }

    long ww;
     if (w < 10)
        {
                ww = ((w % 10) + ((w % 100) / 10));
        }
        else if (w > 10)
            {
                ww = (w % 10) + 1;
            }
        else if (w == 10)
            {
                ww = 1;
            }
        else
            {
                ww = w;
            }

    long xx;
     if (x < 10)
        {
                xx = ((x % 10) + ((x % 100) / 10));;
        }
        else if (x > 10)
            {
                xx = (x % 10) + 1;
            }
        else if (x == 10)
            {
                xx = 1;
            }
        else
            {
                xx = x;
            }

    //Sum processed odd products
    long total_odd = qq + rr + ss + tt + uu + vv + ww + xx;

    //sum total odd products and even card numbers
    long bb = ((b % 10) + ((b % 100) / 10));
    long dd = ((d % 10) + ((d % 100) / 10));
    long ff = ((f % 10) + ((f % 100) / 10));
    long hh = ((h % 10) + ((h % 100) / 10));
    long jj = ((j % 10) + ((j % 100) / 10));
    long ll = ((l % 10) + ((l % 100) / 10));
    long eneene = ((ene % 10) + ((ene % 100) / 10));
    long pp = ((p %10) + ((p % 100) / 10));

    long total_even = bb + dd + ff + hh+ jj + ll + eneene + pp;

    //sum odd & even
    long card_total = total_odd + total_even;


        if (card_total % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if ((card_total % 10 == 0) && (a == 3) && (b == 4 || b == 7))
    {
        printf("AMEX\n");
    }
     else if (card_total % 10 == 0 && a == 5 && b > 0 && b < 6)
    {
        printf("MASTERCARD\n");

    } else if (card_total % 10 == 0 && a == 4)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
