# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 22:47:45 by ljerinec          #+#    #+#              #
#    Updated: 2023/11/28 13:06:30 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
			ClapTrap.class.cpp \
			ScavTrap.class.cpp \
			FragTrap.class.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CPP = fragTrap

INCLUDES_DIR = includes/

####################COMPILATION STYLING####################

PRINT_NAME    := $(CPP)
PRINT_PREFIX  := \033[1m\033[38;5;240m[\033[0m\033[38;5;250m$(PRINT_NAME)\033[1m\033[38;5;240m] \033[38;5;105m~\033[0m

all: $(CPP)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@ -I $(INCLUDES_DIR)

$(CPP): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) -o $(CPP) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(CPP)

re: fclean all

.PHONY: all clean fclean re


.PHONY: all clean fclean re
