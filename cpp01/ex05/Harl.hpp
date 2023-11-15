/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:36:55 by ljerinec          #+#    #+#             */
/*   Updated: 2023/11/15 13:53:43 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>

class Harl
{
public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};
