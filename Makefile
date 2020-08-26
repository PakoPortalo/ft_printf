# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pako <pako@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 10:36:02 by pako              #+#    #+#              #
#    Updated: 2020/08/26 11:39:53 by pako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

CC = gcc


SRC = ft_printf.c ft_flags.c ft_variable_channel.c ft_putnbrMaster.c ft_putcharMaster.c ft_putstrMaster.c

LIB = -Llibft -lft

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)

x:
	@$(CC) $(FLAGS) -I. $(SRC) main.c $(LIB)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
