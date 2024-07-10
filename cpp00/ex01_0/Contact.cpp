/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:48:55 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/10 18:05:12 by smuravye         ###   ########.fr       */
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
	std::getline(std::cin, _firstname);
	if (std::cin.eof())
		return;
	
	std::cout << "Enter your last name: ";
	std::getline(std::cin, _lastname);
	if (std::cin.eof())
		return;
	
	std::cout << "Enter your nickname: ";
	std::getline(std::cin, _nickname);
	if (std::cin.eof())
		return;
	std::cout << "Entry successfully saved." << std::endl;
	std::cout << "o ------------------------------- o" << std::endl;
}

void	Contact::display_contacts(void) const
{
	std::cout	<< std::setw(10) << "INDEX" << " | "
				<< std::setw(10) << "FIRST NAME" << " | "
				<< std::setw(10) << "LAST NAME" << " | "
				<< std::setw(10) << "NICKNAME" << " | "
				<< std::endl;
	// What do we put here to access the array?
}
