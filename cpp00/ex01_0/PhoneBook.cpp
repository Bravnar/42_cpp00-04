/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:40:01 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/10 17:41:32 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::start(void)
{
	std::cout << std::endl;
	std::cout << "o ---------- PHONEBOOK ---------- o" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| Please select: -----------------|" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| ADD: add a contact to phonebook |" << std::endl;
	std::cout << "| SEARCH: search a contact        |" << std::endl;
	std::cout << "| EXIT: exit the program          |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "o ------------------------------- o" << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add(void)
{
	if (_size == 8)
	{
		std::cout << "Phonebook is full. Replacing last contact" << std::endl;
		_contact[_size].set_contact(_size);
		if (std::cin.eof())
			return;
	}
	else
	{
		_contact[_size].set_contact(_size);
		_size++;
		if (std::cin.eof())
			return;
	}
	std::cout << "Current size: " << _size << std::endl;
}

void	PhoneBook::search(void) {
	_contact->display_contacts();
}

void	PhoneBook::exit(void)
{
	std::cout << "Closing PhoneBook." << std::endl;
}
