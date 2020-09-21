# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pako <pako@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 10:36:02 by pako              #+#    #+#              #
#    Updated: 2020/09/21 13:01:31 by pako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

CC = gcc


SRC = 	ft_printf.c ft_flags.c ft_variable_channel.c ft_putnbrMaster.c ft_putcharMaster.c \
		ft_putstrMaster.c ft_atoi.c ft_strchr.c

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
