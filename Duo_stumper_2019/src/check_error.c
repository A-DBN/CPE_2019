/*
** EPITECH PROJECT, 2019
** duo stumper 2
** File description:
** check error
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"

int check_open(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return 0;
    return 1;
}

int check_op_and_re(int fd, int check_read, int size)
{
    if (fd == -1)
        return (84);
    if (check_read != size)
        return (84);
    else
        return (1);
}

char *read_and_buffer(char const *filepath)
{
    int check_stat = 0;
    struct stat off_t;
    char *buffer;
    int size;
    int fd;
    int check;

    check_stat = stat(filepath, &off_t);
    if (check_stat == -1)
        return 0;
    size = off_t.st_size;
    if (size == 0)
        return (0);
    buffer = malloc(sizeof(char) * size + 1);
    buffer[size] = '\0';
    fd = open(filepath, O_RDONLY);
    check = read(fd, buffer, size);
    if (check_op_and_re(fd, check, size)  == 84)
        return (0);
    close(fd);
    return (buffer);
}

char *check_error(int ac, char **av)
{
    char *buffer = NULL;

    if (ac != 3)
        return 0;
    if (my_getnbr(av[2]) < 0)
        return 0;
    buffer = read_and_buffer(av[1]);
    if (buffer == 0)
        return 0;
    if (check_map(av[1], buffer) == 84)
        return 0;
    return buffer;
}
