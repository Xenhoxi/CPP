/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:16 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/18 13:45:40 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Master.hpp"

AMateria::AMateria(void)
{
    return ;
}

AMateria::AMateria(const AMateria &ref)
{
    return ;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
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
