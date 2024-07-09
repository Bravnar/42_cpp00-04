/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:07:43 by smuravyev         #+#    #+#             */
/*   Updated: 2024/07/04 15:40:08 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook 
{
	private:
		Contact		_contacts[8];
		int			_size;
	public:
		PhoneBook();
		~PhoneBook();
		void		start(void) const;
		// void		add(void) const;
		// void		search(void) const;
		// void		exit(void) const;
	
};

#endif