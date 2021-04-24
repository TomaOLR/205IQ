/*
** EPITECH PROJECT, 2021
** IQ.h
** File description:
** IQ.h
*/

#ifndef IQ_H_
#define IQ_H_

#include <stdbool.h>

#endif /* IQ_H_ */

//help.c

void help(void);

//error_handling.c

bool check_num(char *str);
bool error(int ac, char **av);

//205iq.c

void calcul(float mean, float sd);
float percent(float mean, float sd, float min, float max);
