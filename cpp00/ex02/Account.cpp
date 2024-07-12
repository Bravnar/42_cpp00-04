/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:20:31 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/12 15:53:27 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

static void _displayTimestamp( void ) {
	time_t	now = time(0);
	struct tm tstruct;
	tstruct = *localtime(&now);
	
	char	buffer[16];
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buffer << "]";
}

Account::Account( int initial_deposit ) {
	this->_accountIndex = _nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created\n";
}

Account::~Account() {
	for (int i = 0; i < this->_nbAccounts; i++) {
		_displayTimestamp();
		std::cout << "index:" << i << ";amount:" << _totalAmount << ";closed\n";
	}
}
