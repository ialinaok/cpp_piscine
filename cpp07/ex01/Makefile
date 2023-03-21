# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 10:39:52 by apielasz          #+#    #+#              #
#    Updated: 2023/03/21 15:54:27 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

# leaks:
# 	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re