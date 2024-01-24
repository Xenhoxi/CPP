# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 22:47:45 by ljerinec          #+#    #+#              #
#    Updated: 2024/01/24 13:55:42 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CPP = template

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
