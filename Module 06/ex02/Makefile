# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 02:36:40 by ahel-bah          #+#    #+#              #
#    Updated: 2023/01/28 03:33:52 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = main.cpp Base.cpp
HPP = ABC.hpp Base.hpp
OBJ = $(CPP:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
NAME = Base

all: $(NAME)

%.o: %.cpp $(HPP)
	$(CXX) $(CXXFLAGS) -c $<

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
