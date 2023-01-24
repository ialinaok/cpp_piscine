# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 00:26:45 by ialinaok          #+#    #+#              #
#    Updated: 2023/01/24 01:02:11 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re