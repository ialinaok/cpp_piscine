# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 19:26:17 by apielasz          #+#    #+#              #
#    Updated: 2023/02/04 19:29:21 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re