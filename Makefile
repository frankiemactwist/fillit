# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 16:27:54 by fpitkaja          #+#    #+#              #
#    Updated: 2020/09/08 12:15:46 by fpitkaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = gcc -c -Wall -Wextra -Werror

SRC = 

OBS = $(SRC:.c=o)

HEADER = fillit.h

all: $(NAME)

$(NAME): $(OBS)

$(OBS): $(SRC) $(HEADER)
	$(FLAGS) $(SRC)

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
