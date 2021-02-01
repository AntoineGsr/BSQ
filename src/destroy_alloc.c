/*
** EPITECH PROJECT, 2021
** destroy_alloc.c
** File description:
** bsq
*/

#include "../include/bsq.h"

void destroy_dchar(char **str, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++)
        free(str[i]);
    free(str);
}

void destroy_dint(int **str, int nb_rows)
{
    for (int i = 0; i < nb_rows; i++)
        free(str[i]);
    free(str);
}