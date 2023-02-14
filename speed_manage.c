/*
** EPITECH PROJECT, 2022
** speed_manage
** File description:
** speed_manage
*/

#include "header.h"

void manage_speed_two(int mid)
{
    if (mid < 1700 && mid >= 1400)
        return put_speed(CAR_FORWARD, "0.80");
    if (mid < 1400 && mid >= 950)
        return put_speed(CAR_FORWARD, "0.60");
    if (mid < 950 && mid >= 800)
        return put_speed(CAR_FORWARD, "0.45");
    if (mid < 800 && mid >= 650)
        return put_speed(CAR_FORWARD, "0.35");
    if (mid < 650 && mid >= 500)
        return put_speed(CAR_FORWARD, "0.25");
    if (mid < 500 && mid >= 400)
        return put_speed(CAR_FORWARD, "0.15");
    if (mid < 400 && mid >= 250)
        return put_speed(CAR_FORWARD, "0.10");
    if (mid < 250 && mid >= 100)
        return put_speed(CAR_FORWARD, "0.05");
    if (mid < 100 && mid >= 50)
        return put_speed(CAR_FORWARD, "0.01");
}

int manage_speed(char **data)
{
    int mid = 0;
    long unsigned size = 0;
    char *buff = NULL;

    if (!data[15])
        return 84;
    mid = atoi(data[15]);
    if (mid >= 1700)
        put_speed(CAR_FORWARD, "0.9");
    else
        manage_speed_two(mid);
    getline(&buff, &size, stdin);
    free(buff);
    return 0;
}
