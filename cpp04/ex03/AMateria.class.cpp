/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:16 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 15:48:26 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

AMateria* AMateria::floor_item[100];

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(const AMateria &ref)
{
    *this = ref;
}

AMateria::AMateria(std::string const & type)
{
    _type = type;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void    AMateria::save(void)
{
    for (int i = 0; i < 100; i++)
    {
        if (!floor_item[i])
            floor_item[i] = this;
    }
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

}

AMateria::~AMateria(void)
{
    return ;
}
