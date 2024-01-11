/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:27:31 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/11 13:34:06 by ljerinec         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrebbery Creation Form", 145, 137)
{
	_target = target;
	return ;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (_target);
}

void	ShrubberyCreationForm::executeForm() const
{
	std::ofstream	ofs((this->getTarget() += "_Shrubbery").c_str());

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
	std::cout << "Shrubbery Creation Form execute on " << getTarget() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}
