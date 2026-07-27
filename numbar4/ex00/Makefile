SRC =	.sources/Animal.cpp \
		.sources/WrongAnimal.cpp \
		.sources/Cat.cpp \
		.sources/Dog.cpp \
		.sources/WrongCat.cpp \
		.sources/main.cpp
NAME = horrorshow
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
