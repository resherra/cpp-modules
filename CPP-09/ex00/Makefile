SRC = src/main.cpp src/BitcoinExchange.cpp src/Dataset.cpp
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/BitcoinExchange.hpp headers/Dataset.hpp
NAME = btc
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
