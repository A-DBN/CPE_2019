/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf function
*/

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int flag_checker(char c)
{
    char *str = "%csidXxboSu";

    for (int i = 0; str[i] != '\0'; i++) {
        if (c == str[0])
            return (2);
        else if (c == str[i]) {
            return (1);
        }
    }
    return (0);
}

int find_flag(char c)
{
    char *my_flag_string = "csidXxboSu";
    for (int i = 0; my_flag_string[i] != '\0'; i++) {
        if (c == my_flag_string[i]) {
            return (i);
        }
    }
    return (84);
}

int my_printf(char *str, ...)
{
    va_list my_arguments;
    int(*my_flag[12]) (va_list) = {my_printchar, my_printstr, my_print_nbr,
    my_print_nbr, decimal_to_hexaxmaj, decimal_to_hexax, decimal_to_binary,
    decimal_to_octal, unsigned_deci};

    va_start(my_arguments, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '%' && flag_checker(str[i + 1]) == 1) {
            my_flag[find_flag(str[i + 1])](my_arguments);
            i++;
        } else if (str[i] == '%' && flag_checker(str[i + 1]) == 2) {
            my_putchar('%');
            i++;
        } else
            my_putchar(str[i]);
    }
    va_end(my_arguments);
    return (0);
}
