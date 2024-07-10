/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:33:04 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/10 17:39:59 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	PhoneBook	book;
	std::string	cmd;
	
	book.start();
	while (!std::cin.eof())
	{
		std::cout << "---> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
			book.search();
		else if (cmd == "EXIT")
		{
			book.exit();
			break;
		}
		else if (std::cin.eof())
			break ;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}