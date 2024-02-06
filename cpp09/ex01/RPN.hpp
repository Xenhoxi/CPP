/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:13:44 by ljerinec          #+#    #+#             */
/*   Updated: 2024/02/06 10:03:52 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

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

void	computeRPN(std::stack<double> &rpn, std::string input);
void	checkValidity(std::string input);

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