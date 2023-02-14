/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** lib
*/

#include "header.h"

void print_in_error(void)
{
    char *buffer = malloc(sizeof(char) * 8096);

    read(0, buffer, 8096);
    write(2, buffer, strlen(buffer));
    free(buffer);
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const *str)
{
    write(1, str, strlen(str));
}
