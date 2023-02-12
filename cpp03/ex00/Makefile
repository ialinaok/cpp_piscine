# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 18:17:38 by apielasz          #+#    #+#              #
#    Updated: 2023/02/12 18:19:07 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp ClapTrap.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re