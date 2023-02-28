# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/18 20:06:57 by apielasz          #+#    #+#              #
#    Updated: 2023/02/28 11:35:57 by ialinaok         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 28b
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Bureaucrat.cpp AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $@

clean:
	rm -rf *_shrubbery

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re