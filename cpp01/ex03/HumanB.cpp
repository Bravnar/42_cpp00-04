/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:27:11 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 15:15:19 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _name(name), _held(nullptr) {
	std::cout	<< std::endl
				<< this->_name
				<< " enters the arena.\n"
				<< std::endl;
}

HumanB::~HumanB(void) {  std::cout << this->_name << " dieded.\n"; }

void	HumanB::setWeapon(Weapon& newWeapon) {
	this->_held = &newWeapon;
}

void	HumanB::attack(void) {
	if (!this->_held) {
		std::cout << this->_name << " is unarmed!\n";
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_held->getType() << "!\n";
}
