# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/12 17:55:52 by ialinaok          #+#    #+#              #
#    Updated: 2023/03/12 18:59:40 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Base.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

leaks:
	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re