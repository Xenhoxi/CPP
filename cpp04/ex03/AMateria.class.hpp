/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:27 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/13 15:49:07 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include "Master.hpp"

class AMateria
{
protected:
	string	_type;

public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &ref);
    AMateria &operator=(const AMateria &ref);
    virtual ~AMateria(void);
	
	std::string const & getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

class Ice : public AMateria
{
	virtual	AMateria* clone() const;
};

class Cure : public AMateria
{
	virtual	AMateria* clone() const;
};

#endif
