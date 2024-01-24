/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:41:41 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/23 13:54:07 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <stdint.h>
#include <string>
#include <iostream>

class Base
{
public:
	virtual	~Base(void);
	Base	*generate(void);
	void	identify(Base *p);
	void	identify(Base &p);
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif