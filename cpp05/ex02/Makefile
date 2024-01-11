# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 22:47:45 by ljerinec          #+#    #+#              #
#    Updated: 2024/01/11 13:34:12 by ljerinec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SOURCES =	main.cpp \
			Bureaucrat.class.cpp \
			AForm.class.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \

OBJECTS = $(SOURCES:.cpp=.o)

CPP = ExecuteForm

all: $(CPP)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(CPP): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) -o $(CPP) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)
	@rm -f *_Shrubbery

fclean: clean
	@rm -f $(CPP)

re: fclean all

.PHONY: all clean fclean re
