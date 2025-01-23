SRC = source/main.cpp source/utils.cpp source/Animal.cpp source/Dog.cpp source/Cat.cpp source/WrongCat.cpp source/WrongAnimal.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/utils.hpp headers/Animal.hpp headers/Dog.hpp headers/Cat.hpp source/WrongCat.hpp source/WrongAnimal.hpp
NAME = poly
FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
