# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thle <thle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 08:06:28 by thle              #+#    #+#              #
#    Updated: 2021/06/09 09:48:54 by thle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean

CC = gcc
LIB = libft.a
FLAGS = -Wall -Wextra -Werror
SRCS_PATH = ./srcs/
INCLUDES_PATH = ./includes/
SRCS = $(SRCS_PATH)ft_putchar.c $(SRCS_PATH)ft_putstr.c $(SRCS_PATH)ft_strcmp.c $(SRCS_PATH)ft_strlen.c $(SRCS_PATH)ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all:
	$(CC) $(FLAGS) -c $(SRCS) -c -I $(INCLUDES_PATH)
	ar rc $(LIB) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(OBJECTS) $(LIB)

re: fclean all
