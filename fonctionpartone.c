/*
** EPITECH PROJECT, 2022
** capitall letters
** File description:
** capital or not
*/
#include "include/my.h"
#include <unistd.h>

int capital_letters (char c)
{
    int capital = 0;
    if (c >= 'A' && c <= 'Z') {
        return 1;
    }

    if (c >= 'a' && c <= 'z') {
        return 0;
    }
    return 2;
}

int strlenmodif (char *argv)
{
    int nbr_1 =  0;
    int *str = argv[2];

    while (str[i] != '\0') {
        i += 1;
    }
    return i;
}

void pourcent (int argc, char **argv, int count)
{
    int nb;
    int quot = 10000;
    int digit = 0;
    int size = strlenmodif(argv);

    my_put_nbr(size);
    my_putchar(32);
    my_putchar(40);
    nb = count * 10000 / size;
    while (digit == 0 && quot != 100) {
        digit = (nb / quot) % 10;
        quot = quot / 10;
    }
    my_putchar(digit + 48);
    quot = quot * 10;
    while (quot != 100) {
        quot = quot / 10;
        digit = (nb / quot) % 10;
        my_putchar(digit + 48);
    }
    my_putchar(46);
    while (quot != 1) {
        quot = quot / 10;
        digit = (nb / quot) % 10;
        my_putchar(digit + 48);
    }
    my_putchar(37);
    my_putchar(41);
    quot = 10000;
}
