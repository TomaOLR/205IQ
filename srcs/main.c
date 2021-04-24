/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "iq.h"

int main(int ac, char **av)
{
    float res = 0;

    if (error(ac, av))
        return (84);
    else if (strcmp("-h", av[1]) == 0)
        help();

    switch (ac) {
    case 3:
        calcul(atof(av[1]), atof(av[2]));
        break;
    case 4:
        res = percent(atof(av[1]), atof(av[2]), 0, atof(av[3]));
        printf("%.1f%% of people have an IQ inferior to %s\n", res, av[3]);
        break;
    case 5:
        res = percent(atof(av[1]), atof(av[2]), atof(av[3]), atof(av[4]));
        printf("%.1f%% of people have an IQ between %s and %s\n", res, av[3], av[4]);
        break;
    }
    return (0);
}
