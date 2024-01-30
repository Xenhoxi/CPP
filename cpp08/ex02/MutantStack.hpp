/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:06:16 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/30 11:53:49 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP

#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <list>
#include <exception>
#include "limits.h"

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack(void) 
	{

	};
	MutantStack(const MutantStack &src) 
	{
		*this = src;
	};
	MutantStack &operator=(const MutantStack &rhs) 
	{
		return (*this);
	};
	virtual ~MutantStack(void) 
	{

	};
	T	iterator()
	{

	};
};

#endif
