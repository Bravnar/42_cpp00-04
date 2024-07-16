/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:28:32 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:06:50 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Unnamed zomble") {}

Zombie::~Zombie() {
	std::cout << this->_name << " " << this->_index << " disentegrated into a pile of rags" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << " " << this->_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::ChangeName(int i, std::string &name) {
	std::cout << "Renaming " << this->_name << " into ";	
	this->_name = name;
	this->_index = i;
	std::cout << this->_name << ", it is now number " << this->_index << std::endl;
}

void	Zombie::greet() {
	std::cout << this->_name << "... " << this->_index << "... Grr... Hi...\n" << std::endl;
}