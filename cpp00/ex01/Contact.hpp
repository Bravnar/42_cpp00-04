/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 10:26:44 by smuravyev         #+#    #+#             */
/*   Updated: 2024/07/01 11:33:11 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_middlename; //optional
		std::string	_email;
		std::string	_phonenumber;
		int			_index;
	public:
		Contact();
		~Contact();
};

#endif