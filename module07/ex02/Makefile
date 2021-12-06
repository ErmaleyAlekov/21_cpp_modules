# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/05 22:14:45 by uterese           #+#    #+#              #
#    Updated: 2021/12/06 13:28:10 by uterese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
NAME = array
SRC = main.cpp
OBJ	= $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RED	= \033[1;31m
GRN	= \033[1;32m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo -e "$(GRN)Success compiling!"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp
			@$(CC) -c $(FLAGS) -o $@ $<
clean:
	@rm -rf *.o
	@echo -e "$(RED)Delete obj files!"

fclean:			clean
	@echo -e "$(RED)Delete $(NAME)!"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re