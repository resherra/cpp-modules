SRC = src/AForm.cpp src/Bureaucrat.cpp src/PresidentialPardonForm.cpp src/RobotomyRequestForm.cpp src/ShrubberyCreationForm.cpp src/main.cpp src/Intern.cpp  
OBJ = $(SRC:.cpp=.o)
HEADERS = headers/AForm.hpp headers/Bureaucrat.hpp headers/PresidentialPardonForm.hpp headers/RobotomyRequestForm.hpp headers/ShrubberyCreationForm.hpp headers/Intern.hpp 
NAME = intern
FLAGS= -Wall -Wextra -Werror -std=c++98  



all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm $(OBJ)

fclean: clean
	    rm $(NAME) testing_shrubbery

re: fclean all
