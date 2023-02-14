/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** data
*/

#include "header.h"

int get_nb_data(char *str)
{
    int nb = 1;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ':')
            nb++;
    return nb;
}

char **fill_data(char *buff)
{
    int nb_data = get_nb_data(buff);
    char **data = malloc(sizeof(char *) * (nb_data + 1));
    int x = 2;

    for (int i = 0; i != nb_data; i++)
        data[i] = malloc(sizeof(char) * strlen(buff) + 1);
    for (; buff[x] < '0' || buff[x] > '9'; x++);
    for (int y_data = 0, x_data = 0; buff[x] != '\0'; x++, x_data++) {
        if (buff[x] == ':') {
            data[y_data][x_data + 1] = '\0';
            x++;
            y_data++;
            x_data = 0;
        }
        data[y_data][x_data] = buff[x];
    }
    data[nb_data] = NULL;
    return data;
}

int check_end(char **data)
{
    for (int i = 0; data[i] != NULL; i++)
        if (strcmp(data[i], "Track Cleared") == 0) {
            put_end_sim();
            return 1;
        }
    return 0;
}

char **get_data(char **data)
{
    unsigned long size = 0;
    char *buff = NULL;

    my_putstr(INFO);
    getline(&buff, &size, stdin);
    data = fill_data(buff);
    if (check_end(data) == 1)
        return NULL;
    return data;
}
