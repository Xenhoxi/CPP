/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:42:22 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/30 11:00:28 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base	doing;
	Base	*test;

	test = doing.generate();
	doing.identify(test);
	doing.identify(*test);
	delete test;
	return (0);
}