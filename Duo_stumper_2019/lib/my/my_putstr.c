/*
** EPITECH PROJECT, 2019
** putstr
** File description:
** putstr
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
