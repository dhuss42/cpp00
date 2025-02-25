# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 15:11:04 by dhuss             #+#    #+#              #
#    Updated: 2025/02/18 15:15:15 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Unnecessary_violence

$(NAME) : $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re