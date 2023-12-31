/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:19:15 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/20 14:17:36 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "Master.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure &ref);
	Cure &operator=(const Cure &ref);
	~Cure(void);
	AMateria* clone() const;
};

#endif
