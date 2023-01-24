# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 15:18:42 by apielasz          #+#    #+#              #
#    Updated: 2023/01/24 15:20:35 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Violence
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re