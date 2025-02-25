# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/18 13:29:35 by dhuss             #+#    #+#              #
#    Updated: 2025/02/18 14:04:50 by dhuss            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Moarbrainz!

$(NAME) : $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o $(NAME)

all : $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re