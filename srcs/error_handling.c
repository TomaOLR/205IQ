/*
** EPITECH PROJECT, 2021
** error_handling
** File description:
** error_handling
*/

#include <stdbool.h>
#include <stdlib.h>

bool check_num(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] > '9' || str[i] < '0')
            return (false);
    return (true);
}

bool error(int ac, char **av)
{
    if (ac <= 2 || ac > 5)
        return (true);
    for (int i = 1; av[i]; i += 1) {
        if (!check_num(av[i]))
            return (true);
        else if (atof(av[i]) < 0 || atof(av[i]) > 200)
            return (true);
    }
    if (ac == 5 && atoi(av[3]) > atoi(av[4]))
        return (true);
    return (false);
}
