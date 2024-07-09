/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:36:10 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 17:53:38 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include "Contact.hpp"

class	PhoneBook {
	private:
		Contact	_contact[8];
		int		_size;
	public:
		PhoneBook();
		~PhoneBook();
		
		void	start(void);
		void	add(void);
		void	search(std::string input);
		void	exit(void);
};

#endif