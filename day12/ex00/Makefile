# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thle <thle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 12:40:13 by thle              #+#    #+#              #
#    Updated: 2021/06/10 14:23:34 by thle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = /usr/bin/gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SOURCES = ft_display_file.c helpers.c

.PHONY: clean fclean re

all:
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

flcean: clean

re: clean all