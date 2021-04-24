/*
** EPITECH PROJECT, 2021
** 205iq.c
** File description:
** 205iq.c
*/

#include <math.h>
#include <stdio.h>

void calcul(float mean, float sd)
{
    float res = 0;

    for (int i = 0; i <= 200; i += 1) {
        res = (1 / (sd * sqrt(2 * M_PI))) * exp(-0.5 * pow((mean - i) / sd, 2));
        printf("%d %.5f\n", res, i);
    }
}

float percent(float mean, float sd, float min, float max)
{
    float res = 0;

    for (res = 0; min < max; min += 0.01)
        res +=  (1 / (sd * sqrt(2 * M_PI))) * exp(-0.5 * pow((mean - min) / sd, 2));
    return (res);
}
