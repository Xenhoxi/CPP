/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:47:03 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/14 16:01:48 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "losers.hpp"

class	Replace
{
public:
	Replace(void);
	~Replace(void);
	void	doing(void);
private:
	int		isS1(void);
	void	replace(void);
	void	writeInFile(void);
	std::string	line;
};

#endif
