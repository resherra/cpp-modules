SRC = source/main.cpp source/Animal.cpp source/Dog.cpp source/Cat.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/Animal.hpp headers/Dog.hpp headers/Cat.hpp
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
