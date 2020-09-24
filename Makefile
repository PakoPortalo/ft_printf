# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pako <pako@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/14 10:36:02 by pako              #+#    #+#              #
#    Updated: 2020/09/24 19:38:20 by pako             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra

CC = gcc


SRC = 	ft_printf.c ft_flags.c ft_variable_channel.c ft_putnbrMaster.c ft_putcharMaster.c \
		ft_putstrMaster.c ft_atoi.c ft_strchr.c ft_nbrmasterUtils1.c ft_nbrmasterUtils2.c \
		ft_putunsMaster.c ft_unsmasterUtils1.c ft_unsmasterUtils2.c ft_puthexMaster.c \
		ft_hexmasterUtils1.c ft_hexmasterUtils2.c ft_putptrMaster.c ft_ptrmasterUtils1.c \
		ft_ptrmasterUtils2.c

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
