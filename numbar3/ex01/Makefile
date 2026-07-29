SRC =	ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp
NAME = villainous 
OBJ = $(SRC: .cpp=.o)
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
