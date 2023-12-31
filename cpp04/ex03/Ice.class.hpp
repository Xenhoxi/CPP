/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:17:46 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 14:12:07 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "Master.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(const Ice &ref);
	Ice &operator=(const Ice &ref);
	~Ice(void);
	AMateria* clone() const;
};

#endif
