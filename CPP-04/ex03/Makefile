SRC = source/AMateria.cpp source/Cure.cpp source/Ice.cpp source/main.cpp source/utils.cpp source/Character.cpp source/MateriaSource.cpp source/MateriasList.cpp source/Node.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/AMateria.hpp headers/Cure.hpp headers/Ice.hpp headers/ICharacter.hpp headers/utils.hpp headers/Character.hpp headers/MateriaSource.hpp headers/MateriasList.hpp headers/Node.hpp
NAME = interfaces
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
