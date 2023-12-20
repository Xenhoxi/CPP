/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:17:26 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 15:03:04 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

#include "Master.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria    *_blueprint[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &ref);
	MateriaSource &operator=(const MateriaSource &rhs);
	virtual ~MateriaSource(void);
	virtual void learnMateria(AMateria *matos);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
