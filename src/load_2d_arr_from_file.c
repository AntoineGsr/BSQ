/*
** EPITECH PROJECT, 2020
** load_2d_arr_from_file.c
** File description:
** 
*/

#include "../include/bsq.h"

int load_2d_arr_from_file(int  nb_rows, int  nb_cols, char *buff)
{
    int **stock = malloc(sizeof(int *) * (nb_rows + 1));

    for (int j = 0; j < nb_rows; j++)
        stock[j] = malloc(sizeof(int) * (nb_cols + 1));
    if (fs_read_square(buff, stock, nb_rows, nb_cols) == -1)
        return (-1);
    destroy_dint(stock, nb_rows);
    return (0);
}