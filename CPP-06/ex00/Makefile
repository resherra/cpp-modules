SRC = src/main.cpp src/ScalarConverter.cpp src/ConvertTypes.cpp src/CheckTypes.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/ScalarConverter.hpp
NAME = converter
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
