/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** sdf
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
int unsigned_deci(va_list list);
int my_strcmp(char *str, char *cmp);
char **my_str_to_word_array(char *str);
char *my_strcat(char *str, char *to_add);
char **my_str_to_array(char *str, char a);
int check_map(char const *filepath, char *buffer);
char *check_error(int ac, char **av);
int check_open(char const *filepath);
char **cp_arr(char **arr);
int corner_top_left(char **arr, int i, int j);
int corner_top_right(char **arr, int i, int j);
int corner_bot_left(char **arr, int i , int j);
int corner_bot_right(char **arr, int i, int j);
char **game_of_life(char **arr, char **new_arr);
int len_arr(char **arr);
int border_top(char **arr, int i, int j);
int border_right(char **arr, int i, int j);
int border_bot(char **arr, int i, int j);
int border_left(char **arr, int i, int j);
int count_normal_case_suit(char **arr, int i, int j);
char which_case(char c, int count);

#endif
