# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 09:40:28 by apielasz          #+#    #+#              #
#    Updated: 2023/03/21 10:14:33 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Whatever
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

# leaks:
# 	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re