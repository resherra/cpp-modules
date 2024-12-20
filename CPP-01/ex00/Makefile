SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = $(wildcard *.hpp)
NAME = zombies

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
