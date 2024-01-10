/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:00:31 by ljerinec          #+#    #+#             */
/*   Updated: 2024/01/10 12:42:20 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string"
#include "AForm.class.hpp"

class Intern
{
public:
    Intern();
    Intern(const Intern &src);
    Intern &operator=(const Intern &src);
    ~Intern();
    AForm &makeForm(std::string type, std::string target);
};