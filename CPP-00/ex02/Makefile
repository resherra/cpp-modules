SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
HEADERS = Account.hpp
NAME = Account
FLAGS = -Wall -Wextra  -std=c++98

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
