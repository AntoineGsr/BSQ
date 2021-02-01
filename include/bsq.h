/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** 
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "specifer.h"

typedef struct Coord_max Coord_max;
struct Coord_max {
    int max_square;
    int row;
    int col;
};

void cross_on_map(int nb_rows, int nb_cols, int **stock, Coord_max coord);
void detect_cross(char **cross, int row, int col, int sq_size);
int fs_read_square(char *buff, int **stock, int  nb_rows, int  nb_cols);
int is_square_of_size(int **map , int row , int col, Coord_max *cord);
int load_2d_arr_from_file(int  nb_rows, int  nb_cols, char *buff);
int loop_char_to_matrix(char *buff, int **stock, int nb_rows, int nb_cols);
int malloc_buff_size(char const *filepath);
void destroy_dchar(char **str, int nb_rows);
void destroy_dint(int **str, int nb_rows);

#endif /* BSQ_H_ */
