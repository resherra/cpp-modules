SRC = Bureaucrat.cpp Form.cpp main.cpp 
OBJ = $(SRC:.cpp=.o)
HEADERS = Bureaucrat.hpp Form.hpp
NAME = fillForms
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
