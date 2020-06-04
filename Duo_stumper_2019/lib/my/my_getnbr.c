/*
** EPITECH PROJECT, 2019
** getnumber
** File description:
** getnumber
*/

#include "my.h"

int my_getnbr(char *string)
{
    int i = 0;
    int nbr = 0;
    int minus = 1;

    for (int j = 0; string[j] == '-'; j++) {
        minus *= -1;
        i += 1;
    }
    for (; string[i] != '\0'; i++)
        nbr = nbr * 10 + string[i] - '0';
    return (nbr * minus);
}
