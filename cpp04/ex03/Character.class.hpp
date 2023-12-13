/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljerinec <ljerinec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:02:01 by ljerinec          #+#    #+#             */
/*   Updated: 2023/12/13 14:26:24 by ljerinec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "Master.hpp"

using namespace std;

class Character : public ICharacter
{
private:
    AMateria    *_inventory[4];
public:
    Character(void);
    Character(const Character &ref);
    Character operator=(const Character &ref);
    virtual ~Character(void);

    virtual string const &getName() const;
    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter &target);
};

#endif
