# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 13:23:34 by dhuss             #+#    #+#              #
#    Updated: 2025/02/18 13:23:36 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = BraiiiiiiinnnzzzZ

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re:	fclean all

.PHONY: all re clean fclean
