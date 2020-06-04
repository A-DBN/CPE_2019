/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** sdf
*/

#include <stdarg.h>

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char *string);
int my_strlen(char const *str);
int my_getnbr(char *string);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *str);
int how_many_flags(char *str);
char find_my_flag(char *str, char **endptr);
int my_printchar(va_list list);
int my_printstr(va_list list);
int my_print_nbr(va_list list);
void my_putnbr_base(int nbr, char *base);
int decimal_to_hexaxmaj(va_list list);
int decimal_to_hexax(va_list list);
int decimal_to_binary(va_list list);
int my_printf(char *str, ...);
int decimal_to_octal(va_list list);
int my_printwidestr(va_list list);
int unsigned_deci(va_list list);
int my_strcmp(char *str, char *cmp);
char *my_strcat(char *str, char *to_add);
char **my_str_to_array(char *str, char a);

#endif
