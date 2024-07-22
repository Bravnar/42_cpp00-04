/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:26:52 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/22 13:42:35 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	my_replace(std::string &filePath, std::string &what, std::string &by) {
	
	/* Open files and check */
	
	std::ifstream	inFile(filePath.c_str());
	if (!inFile) {
		std::cerr << "Failed to open file " << filePath << std::endl;
		return 1;
	}
	std::string		newName = std::string(filePath) + ".replace";
	std::ofstream	outFile(newName.c_str());
	if (!outFile) {
		std::cerr << "Failed to create file " << newName << std::endl;
		return 1;
	}

	/* Loop line by line and replace */
	
	std::string	line;
	
	while(std::getline(inFile, line)) {
		std::size_t	pos = 0;
		while ((pos = line.find(what, pos)) != std::string::npos) {
			line = line.substr(0, pos) + by + line.substr(pos + what.length());
			pos += by.length();
		}
		outFile << line << std::endl;
	}

	/* Close the file streams */

	inFile.close();
	outFile.close();

	return 0;
}

int	main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Wrong number of args\n";
		return 1;
	}
	
	std::string		filePath = av[1];
	std::string		what = av[2];
	std::string		by = av[3];

	if (my_replace(filePath, what, by)) { return 1; }
	return 0;
}
