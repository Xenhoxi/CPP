# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 22:47:45 by ljerinec          #+#    #+#              #
#    Updated: 2023/12/06 13:56:05 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
			Animal.class.cpp \
			Cat.class.cpp \
			Dog.class.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CPP = polymorphisme

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