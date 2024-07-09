/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:39:03 by smuravyev         #+#    #+#             */
/*   Updated: 2024/07/01 12:00:44 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	/* Constructor */
}

PhoneBook::~PhoneBook()
{
	/* Deconstructor */
}

void	PhoneBook::start(void) const
{
	std::cout << std::endl;
	std::cout << "| ---------- PHONEBOOK ---------- |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| Please select: -----------------|" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| ADD: add a contact to phonebook |" << std::endl;
	std::cout << "| SEARCH: search a contact        |" << std::endl;
	std::cout << "| EXIT: exit the program          |" << std::endl;
	std::cout << "|                                 |" << std::endl;
	std::cout << "| --------------------------------|" << std::endl;
	std::cout << std::endl;
}