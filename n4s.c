/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** main
*/

#include "header.h"

void free_data(char **data)
{
    for (int i = 0; data[i] != NULL; i++)
        free(data[i]);
    free(data);
}

char **manage_car(char **data)
{
    if (manage_speed(data) == 84)
        return NULL;
    if (manage_turn(data) == 84)
        return NULL;
    return data;
}

void loop(void)
{
    char **data = NULL;

    while (1) {
        if (!(data = get_data(data)))
            break;
        if (!(data = manage_car(data)))
            break;
        for (int i = 0; data[i] != NULL; i++)
            free(data[i]);
        free(data);
    }
}

void start(void)
{
    unsigned long size = 0;
    char *buff = NULL;

    setvbuf(stdout, NULL, _IONBF, 0);
    fprintf(stdout, START);
    getline(&buff, &size, stdin);
    free(buff);
}

int main(int ac, char **av)
{
    start();
    loop();
    return 0;
}
