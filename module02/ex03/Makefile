# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 12:41:22 by uterese           #+#    #+#              #
#    Updated: 2021/11/10 12:42:56 by uterese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
NAME = bsp
SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJ	= $(SRC:.cpp=.o)
CC = clang++
FLAGS = -Wall -Wextra -Werror
RED	= \033[1;31m
GRN	= \033[1;32m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo -e "$(GRN)Success compiling!"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o: %.cpp	$(HEADER)
			@$(CC) -c $(FLAGS) -o $@ $<
clean:
	@rm -rf *.o
	@echo -e "$(RED)Delete obj files!"

fclean:			clean
	@echo -e "$(RED)Delete $(NAME)!"
	@rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re