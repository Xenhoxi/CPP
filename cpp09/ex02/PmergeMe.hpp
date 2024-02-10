/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:13:44 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/10 20:46:57 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <map>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <exception>
#include <sstream>
#include "limits.h"

size_t	binarySearch(std::vector<unsigned int> res, unsigned int nb);
void	printVec(std::vector<unsigned int> Vec);
void	printBefore(char **argv);
void	checkNumbers(char **argv);
bool	isNumber(std::string str);
void	mergeSortDeque(std::vector<unsigned int>	&Vec);
void	mergeSortVector(std::vector<unsigned int>	&Vec);
size_t	binarySearchDeque(std::vector<unsigned int> res, unsigned int nb);
size_t	binarySearchVector(std::vector<unsigned int> res, unsigned int nb);


class ErrorMsg : public std::exception 
{
    const char *_message;
public:
    ErrorMsg(const char *msg) : _message(msg) {}
    virtual const char* what() const throw() {
        return (_message);
    }
};

#endif