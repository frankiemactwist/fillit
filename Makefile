# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 16:27:54 by fpitkaja          #+#    #+#              #
#    Updated: 2020/09/14 13:56:42 by fpitkaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = main.c

OBS = $(SRC:.c=.o)

LIB = libft

HEADER = fillit.h

all: $(NAME)

$(NAME): $(OBS)
	make -C libft
	gcc -c $(SRC)
	gcc $(FLAGS) $(OBS) -o $(NAME) -I $(LIB) -L $(LIB) -lft

$(SRC): $(HEADER)

clean:
	make -C libft clean
	rm -f $(OBS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

debug: $(OBS)
	make -C libft
	gcc -c -g $(SRC)
	gcc $(FLAGS) $(OBS) -o $(NAME) -I $(LIB) -L $(LIB) -lft
