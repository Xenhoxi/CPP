/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:16 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/25 14:57:14 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARE_HPP
#define COMPARE_HPP

#include <iostream>
#include <string>

template<typename T>
T       add(T something)
{
    return (something + something); 
}

template<typename T>
void	iter(T *address, int size, T (*function)(T))
{
    int i = -1;

    while (++i < size)
        address[i] = function(address[i]);
}

#endif