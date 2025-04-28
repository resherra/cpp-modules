SRC = src/main.cpp src/Serializer.cpp src/Data.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/Serializer.hpp headers/Data.hpp
NAME = Serializer
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
