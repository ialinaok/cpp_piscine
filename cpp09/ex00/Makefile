# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:11:49 by apielasz          #+#    #+#              #
#    Updated: 2023/05/04 23:46:19 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp BitcoinExchange.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

# leaks:
# 	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re