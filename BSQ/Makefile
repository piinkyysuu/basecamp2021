# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thle <thle@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 05:29:24 by ccariou           #+#    #+#              #
#    Updated: 2021/06/16 20:52:15 by thle             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror -I$(HEADERDIR)
NAME = bsq
FILES = helpers helpers2 create_board fill_square main matrix
SRCDIR = ./srcs/
SRC = $(patsubst %, $(SRCDIR)%.c, $(FILES))
HEADERDIR = ./include/

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
