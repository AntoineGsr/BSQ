/*
** EPITECH PROJECT, 2020
** fs_read_square.c
** File description:
** 
*/

#include "../include/bsq.h"

int fs_read_square(char *buff, int **stock, int  nb_rows, int  nb_cols)
{
    if (my_getnbr(buff) == 0)
        return (0);
    if (loop_char_to_matrix(buff, stock, nb_rows, nb_cols) == -1)
        return (-1);
    return (0);
}
