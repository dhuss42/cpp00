CC = g++
FLAGS = -Werror -Wall -Wextra
CPPFILES = main.cpp\
	Harl.cpp
OFILES = $(CPPFILES:.cpp=.o)
NAME = harlfilter

$(NAME) : $(OFILES)
	@$(CC) $(FLAGS) $(CPPFILES) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re