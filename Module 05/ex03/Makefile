# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 10:41:34 by ahel-bah          #+#    #+#              #
#    Updated: 2023/01/26 11:51:56 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
HPP = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
	  ShrubberyCreationForm.hpp Intern.hpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
NAME = Form

all: $(NAME)

$(NAME): $(HPP) $(OBJ) 
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
