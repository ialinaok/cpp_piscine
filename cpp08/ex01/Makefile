# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 18:14:16 by apielasz          #+#    #+#              #
#    Updated: 2023/03/29 18:14:27 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Span.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

leaks:
	leaks --atExit -- ./$(NAME)

.PHONY: all fclean re