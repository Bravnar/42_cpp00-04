/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:17:56 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:31:34 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main() {
	
	std::string		myString = "HI THIS IS BRAIN";
	std::string*	stringPTR = &myString;
	std::string&	stringREF = myString;

	std::cout << "\nMemory addresses:\n";
	std::cout << std::string(82, '-') << std::endl;

	std::cout << &myString << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;
	
	std::cout << "Values:\n";
	std::cout << std::string(82, '-') << std::endl;

	std::cout << myString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl << std::endl;
}
