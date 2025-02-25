# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 14:42:34 by dhuss             #+#    #+#              #
#    Updated: 2025/02/18 14:54:13 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = HITHISISBRAIN

$(NAME): $(OFILES)
	@$(CC) $(FLAGS) $(CPPFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
