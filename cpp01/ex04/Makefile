CC = g++
FLAGS = -Wall -Werror -Wextra
CPPFILES = main.cpp\
	file.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = Sed_is_for_losers

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) $(CPPFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re