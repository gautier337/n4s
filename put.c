/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** lib
*/

#include "header.h"

void put_turn(char *turn)
{
    fprintf(stdout, "%s %s\n", WHEELS_DIR, turn);
}

void put_wait(char *nb)
{
    fprintf(stdout, "WAIT %s\n", nb);
}

void put_speed(const char *cmd, char *speed)
{
    fprintf(stdout, "%s %s\n", cmd, speed);
}

void put_end_sim(void)
{
    unsigned long size = 0;
    char *buff = NULL;

    put_speed(CAR_FORWARD, "0");
    getline(&buff, &size, stdin);
    put_wait("5");
    getline(&buff, &size, stdin);
    my_putstr(END);
    getline(&buff, &size, stdin);
}
