/*
** EPITECH PROJECT, 2022
** n4s
** File description:
** turn_manage for car
*/

#include "header.h"

void turn_right(int mid)
{
    if (mid >= 800)
        return put_turn("-0.05");
    if (mid < 800 && mid >= 500)
        return put_turn("-0.15");
    if (mid < 500 && mid >= 300)
        return put_turn("-0.25");
    if (mid < 300 && mid >= 100)
        return put_turn("-0.5");
    return put_turn("-0.8");
}

void turn_left(int mid)
{
    if (mid >= 800)
        return put_turn("0.05");
    if (mid < 800 && mid >= 500)
        return put_turn("0.15");
    if (mid < 500 && mid >= 300)
        return put_turn("0.25");
    if (mid < 300 && mid >= 100)
        return put_turn("0.5");
    return put_turn("0.8");
}

int manage_turn(char **data)
{
    long unsigned size = 0;
    char *buff = NULL;
    float right_distance = 0;
    float left_distance = 0;
    int mid = 0;

    if (!data[31] || !data[0])
        return 84;
    mid = atoi(data[15]);
    right_distance = atof(data[15]);
    left_distance = atof(data[0]);
    if (mid >= 1250)
        put_turn("0");
    else if ((right_distance - left_distance) > 0)
        turn_right(mid);
    else
        turn_left(mid);
    getline(&buff, &size, stdin);
    free(buff);
    return 0;
}
