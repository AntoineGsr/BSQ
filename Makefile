##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## bsq
##

SRC	=	./src/cross_on_map.c	\
		./src/detect_cross.c	\
		./src/fs_read_square.c	\
		./src/is_square_of_size.c	\
		./src/load_2d_arr_from_file.c	\
		./src/loop_char_to_matrix.c	\
		./src/malloc_buff_size.c	\
		./src/destroy_alloc.c	\
		./src/main.c

OBJ	=	$(SRC:.c=.o)

NAME 	=	bsq

CFLAGS	=	-I./include/ -g

LDFLAGS =	-L./lib/ -lmy

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) ./lib/my/*~
	$(RM) *~
	$(RM) $(OBJ)
	$(MAKE) -C ./lib/my/ clean

fclean:	clean
	$(RM) $(NAME)
	$(RM) ./lib/libmy.a
	$(MAKE) -C ./lib/my/ fclean

re:	fclean all

lib/libmy.a:
	$(MAKE) -C ./lib/my/

.Phony: all clean fclean re


