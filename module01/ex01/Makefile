# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:26:00 by uterese           #+#    #+#              #
#    Updated: 2021/10/18 01:01:46 by uterese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash

NAME = zombie

SRC = main.cpp ZombieHorde.cpp Zombie.cpp

OBJ = $(SRC: %.cpp=%.o)

CC = clang++

FLAGS = -Wall -Wextra -Werror

RED			=	\033[1;31m
GRN			=	\033[1;32m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo -e "$(GRN)Success compiling!"
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
%.o : %.cpp
	@$(CC) $(FLAGS) $(SRC) -c $< -o $@

clean:
	@rm -rf *.o
	@echo -e "$(RED)Delete obj files!"

fclean:			clean
	@echo -e "$(RED)Delete $(NAME)!"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re 