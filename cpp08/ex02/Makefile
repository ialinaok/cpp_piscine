# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 17:55:46 by apielasz          #+#    #+#              #
#    Updated: 2023/04/02 18:16:37 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

leaks:
	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re