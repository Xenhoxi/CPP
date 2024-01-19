/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:40:27 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 15:43:08 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include "Master.hpp"
#include "ICharacter.class.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(void);
	AMateria(std::string const & type);
	AMateria(const AMateria &ref);
	AMateria &operator=(const AMateria &rhs);
	virtual ~AMateria(void);
	void	save(void);
	static AMateria *floor_item[100];

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
