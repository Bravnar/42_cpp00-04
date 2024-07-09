/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:33:04 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 17:55:20 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main() {
	PhoneBook	book;
	std::string input;
	
	book.start();
	std::cin >> input;
	if (input == "ADD")
		book.add();
	else if (input == "SEARCH") {
		std::cin >>
	}
		book.add()
	return 0;
}