/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"


int main (int ac, char **av)
{
    
    char *buffer = check_error(ac, av);
    char **arr = NULL;
    if (buffer == NULL) {
        printf("return 84\n");
        return 84;
    }
    arr = my_str_to_array(buffer, '\n');
    loop_main(arr, my_getnbr(av[2]));
    return (0);
}
