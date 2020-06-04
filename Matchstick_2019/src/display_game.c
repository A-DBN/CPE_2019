/*
** EPITECH PROJECT, 2020
** display_game
** File description:
** display_game
*/

#include "matchstick.h"
#include "my.h"
#include "struct.h"

void print_str(stick *stick)
{
    my_putstr("Player removed ");
    my_put_nbr(stick->matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(stick->line);
    my_putchar('\n');
}

int player_turn(stick *stick, size_t size, char *buffer, char **av)
{
    int nb_stick = 0;
    int w = 0;
    int nb = 0;

    my_putstr("Line: ");
    nb = getline(&buffer, &size, stdin);
    if (nb == -1)
        exit (84);
    stick->line = my_getnbr(buffer);
    while (get_error(stick, av, buffer, size) == 0) {
        my_putstr("Line: ");
        nb = getline(&buffer , &size, stdin);
        if (nb == -1)
            exit (84);
    }
    stick->line = my_getnbr(buffer);
    matches(stick, size, buffer, av);
}

int matches(stick *stick, size_t size, char *buffer, char **av)
{
    int nb_stick = 0;
    int w = 0;
    int nb = 0;
    
    my_putstr("Matches: ");
    nb = getline(&buffer, &size, stdin);
    if (nb == -1)
        exit (84);
    stick->matches = my_getnbr(buffer);
    if (error_matches(stick, buffer, size, av) == 0)
        player_turn(stick, size, buffer, av);
    stick->matches = my_getnbr(buffer);
    print_str(stick);
    change_line(stick, buffer, size);
    while (stick->map[w] != NULL) {
        nb_stick += check_lines(stick->map[w]);
        w++;
    }
    if (nb_stick == 0) {
        my_putstr("AI's wins\n");
        return (2);
    }
    else
        nb_stick = w = 0;
    stick->player_turn = 0;
    stick->ai_turn = 1;
    return (0);
}

int ai_turn(stick *stick, char *buffer, size_t size)
{
    int nbr_stick = 0;
    int o = 0;
    int nbr_line = stick->nb_lines;

    printf("%i\n", stick->nb_lines);
    my_putstr("AI's turn...\n");
    while (nbr_line >= 1 && check_lines(stick->map[nbr_line]) == 0)
        nbr_line--;
    change_ai_line(stick, nbr_line);
    my_putstr("AI removed 1 match(es) from line ");
    my_put_nbr(nbr_line);
    my_putchar('\n');
    display_map(stick);
    while (stick->map[o] != NULL) {
        nbr_stick += check_lines(stick->map[o]);
        o++;
    }
    if (nbr_stick == 0) {
        my_putstr("Player wins\n");
        return (1);
    }
    else
        nbr_stick = o = 0;
    stick->player_turn = 1;
    stick->ai_turn = 0;
    return (0);
}
