/*
** EPITECH PROJECT, 2022
** header
** File description:
** n4s
*/

#ifndef HEADER_H_
    #define HEADER_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void print_in_error(void);
void my_putchar(char c);
void my_putstr(char const *str);
void free_data(char **data);
char **get_data(char **data);
char **manage_car(char **data);
void end_sim(void);
void put_turn(char *turn);
void put_wait(char *nb);
void put_speed(const char *cmd, char *speed);
int manage_speed(char **data);
int manage_turn(char **data);
void put_end_sim(void);

static const char *START = "START_SIMULATION\n";
static const char *INFO = "GET_INFO_LIDAR\n";
static const char *WAIT = "CYCLE_WAIT:";
static const char *SPEED = "GET_CURRENT_SPEED\n";
static const char *TURN_RATE = "GET_CURRENT_WHEELS\n";
static const char *SPEED_MAX = "GET_CAR_SPEED_MAX\n";
static const char *SPEED_MIN = "GET_CAR_SPEED_MIN\n";
static const char *TIME = "GET_INFO_SIMTIME\n";
static const char *END = "STOP_SIMULATION\n";

static const char *CAR_FORWARD = "CAR_FORWARD:";
static const char *CAR_BACKWARD = "CAR_BACKWARD:";
static const char *WHEELS_DIR = "WHEELS_DIR:";

#endif /* !HEADER_H_ */
