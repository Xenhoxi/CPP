/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:16 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 12:26:29 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(const AMateria &ref)
{
    *this = ref;
    return ;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target)
{
    if (_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *";
    else if (_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *";

}

AMateria::~AMateria(void)
{
    return ;
}
