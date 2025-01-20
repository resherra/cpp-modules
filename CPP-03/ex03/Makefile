SRC = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = FragTrap.hpp ClapTrap.hpp ScavTrap.hpp DiamondTrap.hpp 
NAME = FragTrap
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
