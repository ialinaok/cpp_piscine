# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 18:31:27 by apielasz          #+#    #+#              #
#    Updated: 2023/02/16 18:50:57 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp AAnimal.cpp Cat.cpp Dog.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re