# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thle <thle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 06:44:36 by thle              #+#    #+#              #
#    Updated: 2021/06/08 08:02:48 by thle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = do_op
FLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_helpers.c ft_operators.c do_op.c
INCLUDES = header.h

.PHONY: clean flcean re

all:
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(INCLUDES).gch
	@rm -f $(NAME)
	
re: clean all
