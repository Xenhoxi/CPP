# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 22:47:45 by ljerinec          #+#    #+#              #
#    Updated: 2023/12/20 14:25:09 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

SOURCES =	main.cpp \
			AMateria.class.cpp \
			Character.class.cpp \
			Cure.class.cpp \
			Ice.class.cpp \
			MateriaSource.class.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CPP = interface

all: $(CPP)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(CPP): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) -o $(CPP) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(CPP)

re: fclean all

.PHONY: all clean fclean re
