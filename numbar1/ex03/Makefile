SRC =	main.cpp \
		HumanA.cpp \
		HumanB.cpp \
		Weapon.cpp
NAME = violence 
OBJ = $(SRC: .cpp=.o)
CC = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
