SRC = src/main.cpp src/A.cpp src/B.cpp src/C.cpp src/utilities.cpp src/Base.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/Base.hpp headers/A.hpp headers/B.hpp headers/C.hpp headers/utilities.hpp
NAME = Type
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
