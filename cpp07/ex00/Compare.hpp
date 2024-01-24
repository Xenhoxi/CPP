/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Compare.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:16 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/24 14:46:33 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_HPP
#define COMPARE_HPP

#include <iostream>
#include <string>

template<typename T>
void    swap(T &v1, T &v2)
{
	T tmp = v1;
	v1 = v2;
	v2 = tmp;
}

template<typename T>
T   &min(T &v1, T &v2)
{
	if (v1 < v2)
		return (v1);
	else
		return (v2);
}

template<typename T>
T   &max(T &v1, T &v2)
{
	if (v1 > v2)
		return (v1);
	else
		return (v2);
}

#endif