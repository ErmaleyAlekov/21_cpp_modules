# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 09:59:29 by uterese           #+#    #+#              #
#    Updated: 2021/10/31 11:51:30 by uterese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
NAME = fixed
SRC = main.cpp Fixed.cpp
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