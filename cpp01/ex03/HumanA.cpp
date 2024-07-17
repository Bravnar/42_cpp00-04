/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:37 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/17 17:09:29 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string& name, Weapon type) : _name(name), _type(type)
{
	std::cout << "HumanA " << this->_name << " appeared" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " vanished into thin air" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_type.getType() << std::endl;
}