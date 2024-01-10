/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:27:31 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/09 14:55:54 by ljerinec         ###   ########.fr       */
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

void	ShrubberyCreationForm::executeForm() const
{
	std::ofstream	ofs((this->getName() += "_Shrebbery").c_str());

	ofs << "                                    .         ;" << std::endl
	<< "       .              .              ;%     ;;" << std::endl
	<< "         ,           ,                :;%  %;" << std::endl
	<< "          :         ;                   :;%;'     .," << std::endl
	<< " ,.        %;     %;            ;        %;'    ,;" << std::endl
	<< "   ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
	<< "    %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl
	<< "     ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
	<< "      `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
	<< "       `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
	<< "          `:%;.  :;bd%;          %;@%;'" << std::endl
	<< "            `@%:.  :;%.         ;@@%;'" << std::endl
	<< "              `@%.  `;@%.      ;@@%;" << std::endl
	<< "                `@%%. `@%%    ;@@%;" << std::endl 
	<< "                  ;@%. :@%%  %@@%;" << std::endl
	<< "                    %@bd%%%bd%%:;" << std::endl
	<< "                      #@%%%%%:;;" << std::endl
	<< "                      %@@%%%::;" << std::endl
	<< "                      %@@@%(o);  . '" << std::endl
	<< "                      %@@@o%;:(.,'" << std::endl
	<< "                  `.. %@@@o%::;" << std::endl
	<< "                     `)@@@o%::;" << std::endl
	<< "                      %@@(o)::;" << std::endl
	<< "                     .%@@@@%::;" << std::endl
	<< "                     ;%@@@@%::;." << std::endl
	<< "                    ;%@@@@%%:;;;." << std::endl
	<< "                ...;%@@@@@%%:;;;;,.." << std::endl;
	ofs.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}
