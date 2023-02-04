# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 16:47:31 by apielasz          #+#    #+#              #
#    Updated: 2023/02/04 17:21:17 by apielasz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SedIsForLosers
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	rm -rf *.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re