/*
** EPITECH PROJECT, 2019
** unsigned decimal
** File description:
** u flag for my_printf
*/

#include <stdarg.h>
#include "my.h"

int unsigned_deci(va_list list)
{
    int a = va_arg(list, int);

    if (a > 0 && a < 2147483647) {
        my_put_nbr(a);
        return (a);
    }
    else
        return (84);
}
