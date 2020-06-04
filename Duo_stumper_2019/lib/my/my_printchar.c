/*
** EPITECH PROJECT, 2019
** my_printchar
** File description:
** printchar for my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int my_printchar(va_list list)
{
    my_putchar((char)va_arg(list, int));
    return (1);
}
