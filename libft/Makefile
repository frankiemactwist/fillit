# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpitkaja <fpitkaja@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/09 16:57:12 by fpitkaja          #+#    #+#              #
#    Updated: 2020/09/10 21:39:44 by fpitkaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putstr.c ft_putchar.c ft_strlen.c ft_strcpy.c ft_strncpy.c ft_strcmp.c \
	ft_strncmp.c ft_strdup.c ft_isalpha.c ft_memset.c ft_memcpy.c ft_memccpy.c \
	ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcat.c ft_strncat.c \
	ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strclr.c \
	ft_strnew.c ft_memalloc.c ft_memdel.c ft_strdel.c ft_tolower.c ft_toupper.c \
	ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_atoi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strtrim.c ft_putendl.c ft_putnbr.c ft_strsplit.c ft_itoa.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_intlen.c \
	ft_wordcnt.c ft_iswhitespace.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	ft_lstadd.c ft_lstiter.c ft_lstmap.c get_next_line.c \

OBS = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(OBS)
	ar rc $(NAME) $(OBS)
	ranlib $(NAME)

$(OBS): $(SRC) $(HEADER)
	gcc -c -Wall -Wextra -Werror $(SRC)

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
