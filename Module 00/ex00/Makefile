# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 20:30:28 by ahel-bah          #+#    #+#              #
#    Updated: 2022/11/03 19:11:50 by ahel-bah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror
CXX = c++
NAME = megaphone

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
