/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:16 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 00:37:57 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(const AMateria &ref)
{
    this->_type = ref._type;
    return ;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    this->_type = rhs._type;
    return ;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

AMateria::~AMateria(void)
{
    return ;
}
