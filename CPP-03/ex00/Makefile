SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = ClapTrap.hpp
NAME = ClapTrap
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
