/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:56:53 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/15 13:31:02 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

Replace::Replace(char **argv) : _filename(argv[1]), _s1(argv[2]), _s2(argv[3])
{
	return ;
}

Replace::~Replace(void)
{
	return ;
}

void	Replace::fillFile(void)
{
	std::ofstream	ofs(this->_filename.insert(this->_filename.length(),".replace"));

	ofs << this->_line;
	ofs.close();
}

void	Replace::replaceOccurence(void)
{
	int	index;

	index = this->_line.find(this->_s1);
	while (index >= 0)
	{
		this->_line.erase(index, this->_s1.length());
		this->_line.insert(index, this->_s2);
		index = this->_line.find(this->_s1);
	}
}

void	Replace::replaceString(void)
{	
	std::string		buff;
	std::ifstream	ifs(this->_filename);

	std::getline(ifs, buff);
	if (!ifs.is_open())
	{
		std::cout << "file couldn't be open !" << std::endl;
		return ;
	}
	while (ifs)
	{
		this->_line += buff;
		this->_line += "\n";
		this->replaceOccurence();
		std::getline(ifs, buff);
	}
	ifs.close();
	this->fillFile();
}
