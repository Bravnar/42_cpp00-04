/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:37:31 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 15:15:13 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& type) : _name(name), _held(type) {
	std::cout 	<< this->_name 
				<< " enters the arena wielding a " 
				<< this->_held.getType() 
				<< std::endl;
}

HumanA::~HumanA(void) { std::cout << this->_name << " dieded.\n"; }

void	HumanA::attack(void) {
	std::cout	<< this->_name 
				<< " attacks with their " 
				<< this->_held.getType() 
				<< std::endl;
}
