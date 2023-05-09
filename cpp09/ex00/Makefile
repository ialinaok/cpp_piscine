# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 14:11:49 by apielasz          #+#    #+#              #
#    Updated: 2023/05/04 23:46:19 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp BitcoinExchange.cpp

# color escape codes
GREEN := \033[0;32m
YELLOW := \033[0;33m
BLUE := \033[0;34m
NC := \033[0m

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME) && \
	echo "$(GREEN)$(NAME) successfully compiled!$(NC)"

clean:
	@if [ -n "$(wildcard *.o)" ]; then \
		rm -f *.o; \
		echo "$(BLUE)clean finished!$(NC)"; \
	else \
		echo "$(YELLOW)nothing to clean.$(NC)"; \
	fi

fclean:
	@rm -f $(NAME)
	@echo "$(BLUE)fclean finished!$(NC)"

re:	fclean all

.PHONY: all clean fclean re