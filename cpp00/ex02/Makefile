# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 18:26:26 by ialinaok          #+#    #+#              #
#    Updated: 2023/01/16 18:36:55 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = GlobalBankstersUnited
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re