/*
** EPITECH PROJECT, 2019
** task 02 day 04
** File description:
** putstr pour my_printf
*/

#include <stdarg.h>
#include "my.h"

int my_printstr(va_list list)
{
    int i = my_putstr(va_arg(list, char *));
    return (i);
}
