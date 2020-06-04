/*
** EPITECH PROJECT, 2019
** decimal to octal
** File description:
**  o flag for myprintf
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int decimal_to_octal(va_list list)
{
    int a = va_arg(list, int);
    char *str = "01234567";

    if (a < 0 || a > 2147483647)
        return (84);
    my_putnbr_base (a, str);
    return (0);
}
