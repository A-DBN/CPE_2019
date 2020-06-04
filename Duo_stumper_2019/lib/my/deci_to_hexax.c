/*
** EPITECH PROJECT, 2019
** deci to hexa
** File description:
** x flag for my_printf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int decimal_to_hexax(va_list list)
{
    int a = va_arg(list, int);
    char *str = "0123456789abcdef";

    if (a < 0 || a > 2147483647)
        return (84);
    my_putnbr_base(a, str);
    return (0);
}
