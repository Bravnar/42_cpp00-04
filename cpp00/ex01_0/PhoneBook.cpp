/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:40:01 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 17:53:25 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _size(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::start(void)
{
	std::cout << std::endl;
	std::cout << "  ---------- PHONEBOOK ----------  " << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| Please select: -----------------|" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| ADD: add a contact to phonebook |" << std::endl;
	std::cout << "| SEARCH: search a contact        |" << std::endl;
	std::cout << "| EXIT: exit the program          |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "  -------------------------------- " << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::add(void)
{
	if (_size >= 8)
	{
		std::cout << "Phonebook is full." << std::endl;
		return ;
	}
	_contact[_size].set_contact(_size);
	_size++;
		
}

void	PhoneBook::search(std::string input) {
	
}