/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:27:31 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 13:09:26 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(NULL, 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade())
{
	*this = src;
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void) rhs;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 145, 137)
{
	return ;
}

void	ShrubberyCreationForm::executeForm()
{
	std::cout << "caca" << std::endl;
	// Create a file named : <target>_shrubbery 
	// target is the name in the class AForm.
	// Fill this file with ASCII trees
	//                                    .         ;
	//       .              .              ;%     ;;
	//         ,           ,                :;%  %;
	//          :         ;                   :;%;'     .,
	// ,.        %;     %;            ;        %;'    ,;
	//   ;       ;%;  %%;        ,     %;    ;%;    ,%'
	//    %;       %;%;      ,  ;       %;  ;%;   ,%;'
	//     ;%;      %;        ;%;        % ;%;  ,%;'
	//      `%;.     ;%;     %;'         `;%%;.%;'
	//       `:;%.    ;%%. %@;        %; ;@%;%'
	//          `:%;.  :;bd%;          %;@%;'
	//            `@%:.  :;%.         ;@@%;'
	//              `@%.  `;@%.      ;@@%;
	//                `@%%. `@%%    ;@@%;
	//                  ;@%. :@%%  %@@%;
	//                    %@bd%%%bd%%:;
	//                      #@%%%%%:;;
	//                      %@@%%%::;
	//                      %@@@%(o);  . '
	//                      %@@@o%;:(.,'
	//                  `.. %@@@o%::;
	//                     `)@@@o%::;
	//                      %@@(o)::;
	//                     .%@@@@%::;
	//                     ;%@@@@%::;.
	//                    ;%@@@@%%:;;;.
	//                ...;%@@@@@%%:;;;;,..
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}
