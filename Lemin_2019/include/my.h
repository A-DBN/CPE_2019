/*
** EPITECH PROJECT, 2019
** include.h
** File description:
** include
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct lemin_s {
    int number_of_ants;
    struct room_s {
        char *start_room;
        char *end_room;
    } room_t;
    struct list_s {
        char **rooms;
        char **tunnels;
    } list_t;
} lemin_t;

int my_putstr(char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
char **my_str_to_word_array(char *str, char c);
int my_strcmp(char *s1, char *s2);
int my_getnbr(char const *str);
int error_check(int ac);
int help(void);
void lemin(char **tab);
void struct_da_lemin_struct(lemin_t *lemin_s, char **tab);
void ants_got_da_mooves(lemin_t *lemin_s);
char **get_list_tunnels(char **tab);
char **get_list_rooms(char **tab);
