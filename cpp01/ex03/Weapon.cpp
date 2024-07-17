/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:45:29 by smuravyev         #+#    #+#             */
/*   Updated: 2024/07/17 17:08:26 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) { }

Weapon::Weapon(std::string &type) : _type(type) { }

Weapon::~Weapon(void) { }

const std::string &Weapon::getType(void) const {
	return (this->_type);
}

void	Weapon::setType(const std::string &type) {
	this->_type = type;
}