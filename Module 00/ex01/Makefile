# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 17:53:18 by ahel-bah          #+#    #+#              #
#    Updated: 2022/11/05 11:09:03 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = PhoneBook.cpp PhoneBook.class.cpp Contact.class.cpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror
CXX = c++
NAME = PhoneBook

all: $(NAME)

$(NAME): $(OBJ) PhoneBook.class.hpp Contact.class.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
