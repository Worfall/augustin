/*
** EPITECH PROJECT, 2022
** rush_2
** File description:
** Noan Augustin rush2
*/

#include "include/my.h"
#include <unistd.h>

int capital_letters (char c);
void pourcent (int argc, char **argv, int count);

int conditions (char **argv, int cap_or_not, int count, int argument)
{
    int i = 0;

    while (argv[1][i] != '\0') {
        if (argv[1][i] == *argv[argument])
            count ++;
        if (cap_or_not == 1 && argv[1][i] == *argv[argument] + 32)
            count ++;
        if (cap_or_not == 0 && argv[1][i] == *argv[argument] - 32)
            count ++;
        i++;
    }
    return count;
}

int error (int argc, char **argv)
{
    if (*argv[1] == 0 || argc < 3) {
        write(2, "84 error code", 14);
        return 84;
    }
    return 0;
}

int task01 (int argc, char **argv)
{
    int count = 0;
    int argument = 2;
    int cap_or_not;
    int	errorvar = error(argc, argv);

    if (errorvar == 0) {
        while (argc != argument) {
            cap_or_not = capital_letters (*argv[argument]);
            count = conditions(argv, cap_or_not, count, argument);
            my_putchar(*argv[argument]);
            my_putchar(':');
            my_put_nbr(count);
            pourcent(argc, argv, count);
            my_putchar('\n');
            argument ++;
            count = 0;
        }
    } else {
        return 84;
    }
}

int main (int argc, char **argv)
{
    task01(argc , argv);
}
