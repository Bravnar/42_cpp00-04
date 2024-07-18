/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:10:51 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 15:10:07 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Default constructor */
Weapon::Weapon(void) : _type("stick") { }

/* Parametrized Constructor */
Weapon::Weapon(const std::string& type) : _type(type) { }

/* Destructor */
Weapon::~Weapon(void) { }

const std::string&	Weapon::getType(void) const {
	return this->_type;
}

void				Weapon::setType(std::string newType) {
	this->_type = newType;
}
