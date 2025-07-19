SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = Span.hpp
NAME = span
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
