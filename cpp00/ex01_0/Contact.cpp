/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:48:55 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 17:26:31 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::~Contact() {
	
}

void	Contact::set_contact(void)
{
	std::cout << "Enter your first name: ";
	std::cin >> _firstname;
	std::cout << "Enter your last name: ";
	std::cin >> _lastname;
	std::cout << "Enter your phone number: ";
	std::cin >> _phonenumber;
	
	while (!_number_is_valid(_phonenumber)) {
		std::cout << "Invalid phone number. Please enter again: ";
		std::cin >> _phonenumber;
	}
	
	
	
}
