SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = $(wildcard *.hpp)
NAME = Harl
FLAGS= -Wall -Wextra -Werror -fsanitize=address -g -std=c++98

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
