/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task 7 day 04
*/

#include <stdarg.h>
#include "my.h"

int my_print_nbr(va_list list)
{
    int a = my_put_nbr(va_arg(list, int));
    return (a);
}
