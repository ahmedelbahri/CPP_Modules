# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 17:50:22 by ahel-bah          #+#    #+#              #
#    Updated: 2023/01/28 02:02:46 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = main.cpp Data.cpp
HPP = Data.hpp
OBJ = $(CPP:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
NAME = Data

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
