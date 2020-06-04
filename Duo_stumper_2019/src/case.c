/*
** EPITECH PROJECT, 2020
** game of life
** File description:
** case.c
*/

#include "my.h"

char which_case(char c, int count)
{
    char new_charac = c;

    if (count == 3 && c == '.')
        new_charac = 'X';
    if ((count == 0 || count == 1) && c == 'X')
        new_charac = '.';
    if ((count <= 8 && count >= 4) && c == 'X')
        new_charac = '.';
    return new_charac;
}
