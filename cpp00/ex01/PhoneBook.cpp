/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:40:01 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 15:39:54 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cctype>

PhoneBook::PhoneBook() : _size(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::start(void)
{
	const int width = 49;
	
	std::cout << std::endl;
	std::cout << "o " << std::string(width, '-') << " o" << std::endl;
	std::cout << "| " << std::setw(width) << std::left << "" << " |" << std::endl;
	std::cout << "| " << std::setw(width) << std::left << "Please select: " << " |" << std::endl;
    std::cout << "| " << std::setw(width) << std::left << "" << " |" << std::endl;
    std::cout << "| " << std::setw(width) << std::left << "ADD: add a contact to phonebook" << " |" << std::endl;
    std::cout << "| " << std::setw(width) << std::left << "SEARCH: search a contact" << " |" << std::endl;
    std::cout << "| " << std::setw(width) << std::left << "EXIT: exit the program" << " |" << std::endl;
    std::cout << "| " << std::setw(width) << std::left << "" << " |" << std::endl;
    std::cout << "o " << std::string(width, '-') << " o" << std::endl;
    std::cout << std::endl;
}

bool	PhoneBook::str_is_numeric(std::string& str) const
{
	// return std::all_of(str.begin(), str.end(), ::isdigit);
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}

void	PhoneBook::add(void)
{
	if (_size == 8)
	{
		std::cout << "Phonebook is full. Replacing oldest contact" << std::endl;
		for (int i = 1; i < _size; i++) {
			_contact[i - 1] = _contact[i];
			_contact[i - 1].decr_index();
		}
		_contact[_size - 1].set_contact(_size - 1);
	}
	else
	{
		_contact[_size].set_contact(_size);
		_size++;
	}
	if (std::cin.eof())
		return;
	std::cout << "\nCurrent size: " << _size << std::endl;
}

void	PhoneBook::search(void) {
	std::string	select;
	
	if (!this->_size) {
		std::cout << "PhoneBook is empty, ADD something first!" << std::endl;
		return ;
	}
	std::cout	<< "o " << std::string(49, '-') << " o" << std::endl;
	std::cout	<< "| " << std::right << std::setw(10) << "index" << " | "
				<< std::setw(10) << "firstname" << " | "
				<< std::setw(10) << "lastname" << " | "
				<< std::setw(10) << "nickname" << " |"
				<< std::endl;
	std::cout	<< "| " << std::string(49, '-') << " |" << std::endl;
	for (int i = 0; i < _size; i++) {
		_contact[i].get_contact();
	}
	std::cout	<< "o " << std::string(49, '-') << " o" << std::endl;
	std::cout << "\nEnter index of contact: ";
	std::getline(std::cin, select);
	if (std::cin.eof())
		return;
	do
	{
		if (str_is_numeric(select) && select.length() == 1) {
			int index = std::atoi(select.c_str());
			
			if (index >= 1 && index <= _size) {
				std::cout << "Index [" << select << "] found" << std::endl;
				_contact[index - 1].display();
				break ;
			}
		}
		std::cout << "Invalid index, try again: ";
		std::getline(std::cin, select);
		if (std::cin.eof())
			return;
	} while (true);
}

void	PhoneBook::exit(void)
{
	std::cout << "Closing PhoneBook." << std::endl;
}

