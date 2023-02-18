# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 20:06:57 by apielasz          #+#    #+#              #
#    Updated: 2023/02/18 20:07:14 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re