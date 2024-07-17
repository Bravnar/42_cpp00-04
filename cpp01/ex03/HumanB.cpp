/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:52:55 by smuravyev         #+#    #+#             */
/*   Updated: 2024/07/17 17:11:11 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
	std::cout << "HumanB " << this->_name << " appeared" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB " << this->_name << " vanished into thin air" << std::endl;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_type->getType() << std::endl;
}
