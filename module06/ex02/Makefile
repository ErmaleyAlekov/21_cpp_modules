# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 23:47:41 by uterese           #+#    #+#              #
#    Updated: 2021/12/06 11:52:31 by uterese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
NAME = abc
SRC = main.cpp a.cpp b.cpp c.cpp
OBJ	= $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RED	= \033[1;31m
GRN	= \033[1;32m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo -e "$(GRN)Success compiling!"
	@$(CC) $(FLAG) $(OBJ) -o $(NAME)
%.o: %.cpp
			@$(CC) -c $(FLAG) -o $@ $<
clean:
	@rm -rf *.o
	@echo -e "$(RED)Delete obj files!"

fclean:			clean
	@echo -e "$(RED)Delete $(NAME)!"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re