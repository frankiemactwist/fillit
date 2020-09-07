# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/07 16:27:54 by fpitkaja          #+#    #+#              #
#    Updated: 2020/09/07 16:36:46 by fpitkaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 

OBS = $(SRC:.c=o)

HEADER = fillit.h

all: $(NAME)

$(NAME): $(OBS)

$(OBS): $(SRC) $(HEADER)
	gcc -c -Wall -Wextra -Werror $(SRC)

clean:

fclean:

re:

.PHONY: clean fclean all re
