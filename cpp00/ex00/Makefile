# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 15:33:17 by apielasz          #+#    #+#              #
#    Updated: 2023/01/12 22:38:09 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

# OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

# clean:
# 	rm -f $(OBJ)

fclean:# clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re