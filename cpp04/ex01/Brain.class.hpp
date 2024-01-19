/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 10:44:51 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/14 15:40:10 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Brain
{
public:
	Brain(void);
	Brain(const Brain &ref);
	Brain &operator=(const Brain &rhs);
	~Brain(void);
private:
	std::string ideas[100];
};

#endif