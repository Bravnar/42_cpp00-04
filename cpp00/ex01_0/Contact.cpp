/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:48:55 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 18:20:30 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::~Contact() {
	
}

void	Contact::set_contact(int index)
{
	_index = index;
	std::cout << "Enter your first name: ";
	std::cin >> _firstname;
	std::cout << "Enter your last name: ";
	std::cin >> _lastname;
	std::cout << "Enter your nickname: ";
	std::cin >> _nickname;
	std::cout << "Entry successfully saved." << std::endl;
	std::cout << "o ------------------------------- o" << std::endl;
}
