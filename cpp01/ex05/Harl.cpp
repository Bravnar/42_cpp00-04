/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:04:38 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/22 15:26:23 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() { }

Harl::~Harl() { }

void	Harl::complain(std::string level) {
	const func			levels[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	const std::string	input[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++) {
		if (!level.compare(input[i])) {
			(this->*levels[i])();
			return ;
		}
	}
	std::cout << "Level not found\n";
}

void	Harl::_debug(void) {
	std::cout <<	BOLD_GREEN "[DEBUG]\t\t" BOLD_WHITE;
	std::cout <<	"I love having extra bacon for my \n\
		7XL-double-cheese-triple-pickle-specialketchup burger.\n\
		I really do!\n" RESET_COLOR << std::endl;
}

void	Harl::_info(void) {
	std::cout << 	BOLD_BLUE "[INFO]\t\t" BOLD_WHITE;
	std::cout <<	"I cannot believe adding extra bacon\n\
		costs more money. You didn’t put enough\n\
		bacon in my burger! If you did, I wouldn’t\n\
		be asking for more!\n" RESET_COLOR << std::endl;
}

void	Harl::_warning(void) {
	std::cout << BOLD_YELLOW "[WARNING]\t" BOLD_WHITE;
	std::cout << "I think I deserve to have some extra\n\
		bacon for free. I’ve been coming for years whereas\n\
		you started working here since last month.\n" RESET_COLOR << std::endl;
}

void	Harl::_error(void) {
	std::cout << BOLD_RED "[ERROR]\t\t" BOLD_WHITE;
	std::cout << "This is unacceptable! I want to speak\n\
		to the manager now.\n" RESET_COLOR << std::endl;
}