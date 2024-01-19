/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:47:03 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/15 13:19:50 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_CLASS_HPP
# define REPLACE_CLASS_HPP

#include "losers.hpp"

class	Replace
{
public:
	Replace(char **argv);
	~Replace(void);
	void	replaceString(void);
private:
	void	replaceOccurence(void);
	void	fillFile(void);
	std::string	_line;
	std::string _filename;
	std::string _s1;
	std::string _s2;
};

#endif
