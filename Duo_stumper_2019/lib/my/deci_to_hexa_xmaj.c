/*
** EPITECH PROJECT, 2019
** convert decimal integer to hexadecimal
** File description:
** flag X for my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "my.h"

int decimal_to_hexaxmaj(va_list list)
{
    int a = va_arg(list, int);
    char *str = "0123456789ABCDEF";

    if (a < 0 || a > 2147483647)
        return (84);
    my_putnbr_base(a, str);
    return (0);
}
