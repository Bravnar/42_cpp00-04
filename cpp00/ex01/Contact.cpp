/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:48:55 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/11 15:29:04 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	
}

Contact::~Contact() {
	
}

bool	Contact::valid_phonenumber(std::string& str) const
{
	if (str.empty())
		return false;
	
	if (str[0] != '+' && !std::isdigit(str[0]))
		return false;

	for (std::size_t i = 1; i < str.size(); i++) {
		if (!std::isdigit(str[i]))
			return false;
	}

	return true;
}

void	Contact::set_contact(int index)
{
	_index = index;

	std::cout << "o " << std::string(49, '-') << " o" << std::endl;
	std::cout << "First Name:\t";
	std::getline(std::cin, _firstname);
	if (std::cin.eof())
		return;
	while (_firstname.empty())
	{
		std::cout << "Nothing entered!" << std::endl;
		std::cout << "First Name:\t";
		std::getline(std::cin, _firstname);
		if (std::cin.eof())
			return;
	}
	
	std::cout << "Last Name:\t";
	std::getline(std::cin, _lastname);
	if (std::cin.eof())
		return;
	while (_lastname.empty())
	{
		std::cout << "Nothing entered!" << std::endl;
		std::cout << "Last Name:\t";
		std::getline(std::cin, _lastname);
		if (std::cin.eof())
			return;
	}
	
	std::cout << "Nickname:\t";
	std::getline(std::cin, _nickname);
	if (std::cin.eof())
		return;
	while (_nickname.empty())
	{
		std::cout << "Nothing entered!" << std::endl;
		std::cout << "Nickname:\t";
		std::getline(std::cin, _nickname);
		if (std::cin.eof())
			return;
	}

	std::cout << "Phone number:\t";
	std::getline(std::cin, _phonenumber);
	if (std::cin.eof())
		return;
	while (!valid_phonenumber(_phonenumber))
	{
		std::cout << "Empty or invalid Phone Number!" << std::endl;
		std::cout << "Phone number:\t";
		std::getline(std::cin, _phonenumber);
		if (std::cin.eof())
			return;
	}

	std::cout << "Darkest secret:\t";
	std::getline(std::cin, _secret);
	if (std::cin.eof())
		return;
	while (_secret.empty())
	{
		std::cout << "Nothing entered!" << std::endl;
		std::cout << "Darkest secret:\t";
		std::getline(std::cin, _secret);
		if (std::cin.eof())
			return;
	}
	
	std::cout << "\nEntry successfully saved." << std::endl;
	std::cout << "o " << std::string(49, '-') << " o" << std::endl;
}

std::string	Contact::truncate(std::string str, size_t width) const
{
	if (str.length() > width)
		return str.substr(0, width) + ".";
	else
		return str;
}

void	Contact::get_contact(void) const
{
	std::cout	<< "| " << std::right << std::setw(10) << _index + 1 << " | "
				<< std::setw(10) << truncate(_firstname, 9) << " | "
				<< std::setw(10) << truncate(_lastname, 9) << " | "
				<< std::setw(10) << truncate(_nickname, 9) << " |"
				<< std::endl;
}

void	Contact::decr_index(void)
{
	_index = _index - 1;
}

void	Contact::display(void) const
{
	// std::cout	<< "Index:\t\t" << _index + 1 << std::endl;
	std::cout	<< "First name:\t\t" << _firstname << std::endl;
	std::cout	<< "Last name:\t\t" << _lastname << std::endl;
	std::cout	<< "Phone number:\t\t" << _phonenumber << std::endl;
	std::cout	<< "Darkest secret:\t\t" << _secret << std::endl;
}
