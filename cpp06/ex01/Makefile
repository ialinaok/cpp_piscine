# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 18:05:15 by ialinaok          #+#    #+#              #
#    Updated: 2023/03/09 23:54:31 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 
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