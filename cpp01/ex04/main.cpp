/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:26:52 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 16:32:03 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av) {
	
	if (ac != 4) {
		std::cout << "Wrong number of args\n";
		return 1;
	}
	
	std::ifstream	inFile(av[1]);
	std::ofstream	outFile(av[1]);
	std::string		myString;
	if (!inFile || !outFile) {
		std::cerr << "Error opening file with path " << av[1] << std::endl;
	}
	return 0;
}