# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thle <thle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 12:40:13 by thle              #+#    #+#              #
#    Updated: 2021/06/10 17:44:57 by thle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = /usr/bin/gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_cat
SOURCES = ft_cat.c helpers.c

.PHONY: clean fclean re

all:
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

flcean: clean

re: clean all