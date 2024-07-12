/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:20:31 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/12 14:30:41 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ) {
	
}

Account::~Account() {}

static void _displayTimestamp( void ) {
	time_t	now = time(0);
	struct tm tstruct;
	tstruct = *localtime(&now);
}