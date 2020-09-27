# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pako <pako@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 10:36:02 by pako              #+#    #+#              #
#    Updated: 2020/09/27 12:55:24 by pako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra

CC = gcc


SRC = 	ft_printf.c ft_flags.c ft_variable_channel.c ft_putnbrmaster.c ft_putcharmaster.c \
		ft_putstrmaster.c ft_atoi.c ft_strchr.c ft_nbrmasterutils1.c ft_nbrmasterutils2.c \
		ft_putunsmaster.c ft_unsmasterutils1.c ft_unsmasterutils2.c ft_puthexmaster.c \
		ft_hexmasterutils1.c ft_hexmasterutils2.c ft_putptrmaster.c ft_ptrmasterutils1.c \
		ft_ptrmasterutils2.c ft_resetflags.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME):
		-@$(CC) -g $(FLAGS) -I. -c $(SRC)
		-@ar rc $(NAME) $(OBJ)
		-@ranlib $(NAME)

x:
		-@$(CC) -g $(FLAGS) -I. main.c libftprintf.a

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
